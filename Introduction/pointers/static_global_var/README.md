Global and static pointers
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
