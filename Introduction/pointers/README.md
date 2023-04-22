Poiter Basics
**Dereferencing a Pointer Using the Indirection Operator**
The indirection operator, *, returns the value pointed to by a pointer variable. This is
frequently referred to as dereferencing a pointer. In the following example, num and pi
are declared and initialized:
 int num = 5;
 int *pi = &num;
The indirection operator is then used in the following statement to display 5, the value
of num:
 printf("%p\n",*pi); // Displays 5
We can also use the result of the dereference operator as an lvalue. The term lvalue refers
to the operand found on the left side of the assignment operator. All lvalues must be
modifiable since they are being assigned a value.
The following will assign 200 to the integer pointed to by pi. Since it is pointing to the
variable num, 200 will be assigned to num. Figure 1-5 illustrates how memory is affected:
 *pi = 200;
 printf("%d\n",num); // Displays 20

**Pointer to void**
A pointer to void is a general-purpose pointer used to hold references to any data type.
An example of a pointer to void is shown below:
 void *pv;
It has two interesting properties:
• A pointer to void will have the same representation and memory alignment as a
pointer to char.
• A pointer to void will never be equal to another pointer. However, two void pointers
assigned a NULL value will be equal.
Any pointer can be assigned to a pointer to void. It can then be cast back to its original
pointer type. When this happens the value will be equal to the original pointer value.
This is illustrated in the following sequence, where a pointer to int is assigned to a
pointer to void and then back to a pointer to int:
 int num;
 int *pi = &num;
 printf("Value of pi: %p\n", pi);
 void* pv = pi;
 pi = (int*) pv;
 printf("Value of pi: %p\n", pi);
When this sequence is executed as shown below, the pointer address is the same:
Value of pi: 100
Value of pi: 100

**Global and static pointers**
If a pointer is declared as global or static, it is initialized to NULL when the program starts.
An example of a global and static pointer follows:
int *globalpi;
void foo() {
 static int *staticpi;
 ...
}
int main() {
 ..

**Using intptr_t and uintptr_t**
The types intptr_t and uintptr_t are used for storing pointer addresses. They provide
a portable and safe way of declaring pointers, and will be the same size as the underlying
pointer used on the system. They are useful for converting pointers to their integer
representation.
The type uintptr_t is the unsigned version of intptr_t. For most operations intptr_t
is preferred. The type uintptr_t is not as flexible as intptr_t. The following illustrates
how to use intptr_t:
 int num;
 intptr_t *pi = &num;
If we try to assign the address of an integer to a pointer of type uintptr_t as follows,
we will get a syntax error:
 uintptr_t *pu = &num;
The error follows:
error: invalid conversion from 'int*' to 
 'uintptr_t* {aka unsigned int*}' [-fpermissive]
However, performing the assignment using a cast will work:
 intptr_t *pi = &num;
 uintptr_t *pu = (uintptr_t*)&num;
We cannot use uintptr_t with other data types without casting:
 char c;
 uintptr_t *pc = (uintptr_t*)&c;
These types should be used when portability and safety are an issue. However, we will
not use them in our examples to simplify their explanations

**Comparing Pointers**
Pointers can be compared using the standard comparison operators. Normally, com‐
paring pointers is not very useful. However, when comparing pointers to elements of
an array, the comparison’s results can be used to determine the relative ordering of the
array’s elements.
We will use the vector example developed in the section “Subtracting two pointers” on
page 24 to illustrate the comparison of pointers. Several comparison operators are ap‐
plied to the pointers, and their results are displayed as 1 for true and 0 for false:
 int vector[] = {28, 41, 7};
 int *p0 = vector;
 int *p1 = vector+1;
 int *p2 = vector+2;
 
 printf("p2>p0: %d\n",p2>p0); // p2>p0: 1
 printf("p2<p0: %d\n",p2<p0); // p2<p0: 0
 printf("p0>p1: %d\n",p0>p1); // p0>p1: 0

# COMMON USES OF POINTERS
**Multiple Levels of Indirection**
Pointers can use different levels of indirection. It is not uncommon to see a variable
declared as a pointer to a pointer, sometimes called a double pointer. A good example
of this is when program arguments are passed to the main function using the tradition‐
ally named argc and argv parameters. This is discussed in more detail in Chapter 5.
The example below uses three arrays. The first array is an array of strings used to hold
a list of book titles:
 char *titles[] = {"A Tale of Two Cities",
 "Wuthering Heights","Don Quixote",
 "Odyssey","Moby-Dick","Hamlet",
 "Gulliver's Travels"};
Two additional arrays are provided whose purpose is to maintain a list of the “best
books” and English books. Instead of holding copies of the titles, they will hold the
address of a title in the titles array. Both arrays will need to be declared as a pointer
to a pointer to a char. The array’s elements will hold the addresses of the titles array’s
Common Uses of Pointers | 25
elements. This will avoid having to duplicate memory for each title and results in a single
location for titles. If a title needs to be changed, then the change will only have to be
performed in one location.
The two arrays are declared below. Each array element contains a pointer that points to
a second pointer to char:
 char **bestBooks[3];
 char **englishBooks[4];
The two arrays are initialized and one of their elements is displayed, as shown below.
In the assignment statements, the value of the righthand side is calculated by applying
the subscripts first, followed by the address-of operator. For example, the second state‐
ment assigns the address of the fourth element of titles to the second element of
bestBooks:
 bestBooks[0] = &titles[0];
 bestBooks[1] = &titles[3];
 bestBooks[2] = &titles[5];
 
 englishBooks[0] = &titles[0];
 englishBooks[1] = &titles[1];
 englishBooks[2] = &titles[5];
 englishBooks[3] = &titles[6];
 
 printf("%s\n",*englishBooks[1]); // Wuthering Heights

**Constants and Pointers**
Using the const keyword with pointers is a rich and powerful aspect of C. It provides
different types of protections for different problem sets. Of particular power and use‐
fulness is a pointer to a constant. In Chapters 3 and 5, we will see how this can protect
users of a function from modification of a parameter by the function.
Pointers to a constant
A pointer can be defined to point to a constant. This means the pointer cannot be used
to modify the value it is referencing. In the following example, an integer and an integer
constant are declared. Next, a pointer to an integer and a pointer to an integer constant
are declared and then initialized to the respective integers:

 int num = 5;
 const int limit = 500;
 int *pi; // Pointer to an integer
 const int *pci; // Pointer to a constant integer
 pi = &num;
 pci = &limit;

 **Constant pointers to nonconstants**
We can also declare a constant pointer to a nonconstant. When we do this, it means that
while the pointer cannot be changed, the data pointed to can be modified. An example
of such a pointer follows

int num;
int *const cpi = &num;

With this declaration:
• cpi must be initialized to a nonconstant variable
• cpi cannot be modified
• The data pointed to by cpi can be modified

It is possible to dereference cpi and assign a new value to whatever cpi is referencing.
The following are two valid assignments:

*cpi = limit;
*cpi = 20;

However, if we attempt to initialize cpi to the constant limit as shown below, we will
get a warning:

const int limit = 500;
int *const cpi = &limit;

The warning will appear as follows:
warning: initialization discards qualifiers from pointer target type
Once an address has been assigned to cpi, we cannot assign a new value to cpi as shown
below:

int data;
int info;
int *const base = &data;
base = &info; **'base' : you cannot assign to a variable that is const**

**Constant pointers to constants**
A constant pointer to a constant is an infrequently used pointer type. The pointer cannot
be changed, and the data it points to cannot be changed through the pointer. An example
of a constant pointer to a constant integer follows:

int num;
const int *const cpi = &num;
When the pointer is declared, we must initialize it. If we do not initialize it as shown
below, we will get a syntax error:
 const int * const cpci;
The syntax error will be similar to the following: 'cpci' : const object must be initialized if not extern

**Pointer to (constant pointer to constant)**
Pointers to constants can also have multiple levels of indirection. In the following ex‐
ample, we declare a pointer to the cpci pointer explained in the previous section. Read‐
ing complex declarations from right to left helps clarify these types of declarations:

const int limit = 100; // constant integer
cont int *const pci = &limit; // a constant pointer, referencing a constant integer
cont int *const *bbc = &pci; // a constant pointer referencing a constant pointer