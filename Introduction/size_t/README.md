Predefined Pointer-Related Types


Four predefined types are frequently used when working with pointers. They include:

size_t -> Created to provide a safe type for sizes

ptrdiff_t -> Created to handle pointer arithmetic

intptr_t and uintprt_t -> Used for storing pointer addresses


Understanding size_t
The type size_t represents the maximum size any object can be in C. It is an unsigned
integer since negative numbers do not make sense in this context. Its purpose is to
provide a portable means of declaring a size consistent with the addressable area of
memory available on a system. The size_t type is used as the return type for the sizeof
operator and as the argument to many functions, including malloc and strlen, among
others.
It is good practice to use size_t when declaring variables for sizes such
as the number of characters and array indexes. It should be used for loop counters, indexing into arrays, and sometimes for pointer arithmetic.
The declaration of size_t is implementation-specific. It is found in one or more stan‐
dard headers, such as stdio.h and stdlib.h, and it is typically defined as follows:
#ifndef __SIZE_T
#define __SIZE_T
typedef unsigned int size_t;
#endif
The define directives ensure it is only defined once. The actual size will depend on the
implementation. Typically, on a 32-bit system, it will be 32 bits in length, while on a 64-
bit system it will be 64 bits in length. Normally, the maximum possible value for size_t
is SIZE_MAX.
