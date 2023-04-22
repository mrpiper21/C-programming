# DYNAMIC MEMORY ALLOCATION
The ability to allocate and then deallocate memory allows an application to manage its memory more efficiently and with greater flexibility. Instead of having to allocate memory to accommodate the largest possible size for a data structure, only the actual amount required needs to be allocated.
For example, arrays are fixed size in versions of C prior to C99. If we need to hold a variable number of elements, such as employee records, we would be forced to declare an array large enough to hold the maximum number of employees we believe would be
needed. If we underestimate the size, we are forced to either recompile the application with a larger size or to take other approaches. If we overestimate the size, then we will waste space. The ability to dynamically allocate memory also helps when dealing with data structures using a variable number of elements, such as a linked list or a queue.
 The array’s size is de‐
termined at runtime and not at compile time. However, once created,
arrays still do not change size.
Languages such as C also support dynamic memory management where objects are
allocated memory from the heap. This is done manually using functions to allocate and deallocate memory. The process is referred to as dynamic memory management.
**The basic steps used for dynamic memory allocation** in C are:
1. Use a malloc type function to allocate memory
2. Use this memory to support the application
3. Deallocate the memory using the free function

In the following example, we allocate memory for an integer using the malloc
function. The pointer assigns five to the allocated memory, and then the memory is
released using the free function:

int *pi = (int*) malloc(sizeof(int));
*pi = 5;
printf("*pi: %d\n", *pi);
free(pi);

In this example, we are trying to allocate enough memory for an integer. If we assume its size is 4, we can use:
 int *pi = (int*) malloc(4));
However, the size of an integer can vary, depending on the memory model used. A
portable approach is to use the sizeof operator. This will return the correct size regardless of where the program is executing.

A common error involving the dereference operator is demonstrated
below:
 > int *pi;
 > *pi = (int*) malloc(sizeof(int));
The problem is with the lefthand side of the assignment operation. We
are dereferencing the pointer. This will assign the address returned by
malloc to the address stored in pi. If this is the first time an assignment
is made to the pointer, then the address contained in the pointer is probably invalid.
The correct approach is shown below:
> pi = (int*) malloc(sizeof(int));
The free function is used to deallocate memory when it is no longer needed and also to avoid memory leaks.

This code allocates 6 bytes of memory from the heap with the malloc function, and then stores the address of the allocated memory in the pointer pc. It then loops through 8 iterations of the loop, which is an error as the allocated memory can only store 6 bytes. The array access operator "[]" is then used to dereference pc and write 0 at each iteration of the loop. If the loop was allowed to complete, it would write beyond the allocated memory and cause a "buffer overrun" corruption of the memory, leading to hard to debug problems in the application. Thus, this code can lead to serious issues and should be avoided.
char *pc = (char*) malloc(6)
for (int i = 0; i < 8; i++){
    *pc[1] = 0;
}

# Memory Leaks
A memory leak occurs when allocated memory is never used again but is not freed. This
can happen when:
• The memory’s address is lost
• The free function is never invoked though it should be (sometimes called a hidden leak)
A problem with memory leaks is that the memory cannot be reclaimed and used later.The amount of memory available to the heap manager is decreased. If memory is repeatedly allocated and then lost, then the program may terminate when more memory is needed but malloc cannot allocate it because it ran out of memory. In extreme cases, the operating system may crash. This is illustrated in the following simple example:

char *chunks;
while(1){
    chunks = (char*) malloc(1000000);
    printf("Allocating\n");
}

**Losing address**
An example of losing the address of memory is illustrated in the following coe sequence where cp id reasigned a new address. The address of the first allocation of memory is lost when cp is allocated memory a second time.

int *cp = (int*) malloc(sizeof(int));
*cp = 5;
...
cp = (int*) malloc(sizeof(int));

