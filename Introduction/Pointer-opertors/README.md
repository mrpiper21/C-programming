* Used to declare a pointer
* Dereference Used to dereference a pointer
-> Point-to Used to access fields of a structure referenced by a pointer
+ Addition Used to increment a pointer
- Subtraction Used to decrement a pointer
== != Equality, inequality Compares two pointers
> >= < <= Greater than, greater than or equal, less than, less
than or equal
Compares two pointers
(data type) Cast


Adding an integer to a pointer

This operation is very common and useful. When we add an integer to a pointer, the
amount added is the product of the integer times the number of bytes of the underlying
data type.
The size of primitive data types can vary from system to system, as discussed in “Memory
Models” on page 16. However, Table 1-5 shows the common sizes found in most systems.
Unless otherwise noted, these values will be used for the examples in this book.
Table 1-5. Data type sizes
Data Type Size in Bytes
byte 1
char 1
short 2
int 4
long 8
float 4
double 8

To illustrate the effects of adding an integer to a pointer, we will use an array of integers,
as shown below. Each time one is added to pi, four is added to the address. Pointers are declared with data types so that these sorts of arithmetic operations are possible. Knowledge of the data type size allows the automatic adjustment of the pointer values in a portable fashion:

 int vector[] = {28, 41, 7};
 int *pi = vector; // pi: 100

 printf("%d\n",*pi); // Displays 28
 pi += 1; // pi: 104
 printf("%d\n",*pi); // Displays 41
 pi += 1; // pi: 108
 printf("%d\n",*pi); // Displays 7
