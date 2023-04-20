Using intptr_t and uintptr_t

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
not use them in our examples to simplify their explanations.

*****Avoid casting a pointer to an integer. In the case of 64-bit pointers,
information will be lost if the integer was only four bytes******
