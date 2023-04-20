Poiter Basics
# Constants and Pointers
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