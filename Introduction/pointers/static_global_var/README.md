**Global and static pointers**
If a pointer is declared as global or static, it is initialized to NULL when the program starts.
An example of a global and static pointer follows:


int *globalpi; /*global variable*/

void foo() {
 static int *staticpi; /*static variable*/
 ...
}

int main() {
 ...
}


Figure 1-6 illustrates this memory layout. Stack frames are pushed onto the stack, and
the heap is used for dynamic memory allocation. The region above the heap is used for
static/global variables. This is a conceptual diagram only. Static and global variables are
frequently placed in a data segment separate from the data segment used by the stack
and heap

**Pointers to void and addition**
Most compilers allow arithmetic to be performed on a pointer to void as an extension.
Here we will assume the size of a pointer to void is four. However, trying to add one to
a pointer to void may result in a syntax error. In the following code snippet, we declare
and attempt to add one to the pointer:
 int num = 5;
 void *pv = &num;
 printf("%p\n",pv);
 pv = pv+1; //Syntax warning
The resulting warning follows:
warning: pointer of type 'void *' used in arithmetic [-Wpointerarith]
Since this is not standard C, the compiler issued a warning. However, the resulting
address contained in pv will be incremented by four bytes.

**Subtracting an integer from a pointer**
Integer values can be subtracted from a pointer in the same way they are added. The
size of the data type times the integer increment value is subtracted from the address.
To illustrate the effects of subtracting an integer from a pointer, we will use an array of
integers as shown below. The memory created for these variables is illustrated:

int vector[] = {28, 41, 7};
 int *pi = vector + 2; // pi: 108
 
 printf("%d\n",*pi); // Displays 7
 pi--; // pi: 104
 printf("%d\n",*pi); // Displays 41
 pi--; // pi: 100
 printf("%d\n",*pi); // Displays 28

 **Subtracting two pointers**
When one pointer is subtracted from another, we get the difference between their ad‐
dresses. This difference is not normally very useful except for determining the order of
elements in an array.
The difference between the pointers is the number of “units” by which they differ. The
difference’s sign depends on the order of the operands. This is consistent with pointer
addition where the number added is the pointer’s data type size. We use “unit” as the
operand. 