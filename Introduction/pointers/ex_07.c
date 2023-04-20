#include <stdio.h>
/*Dereferencing a Pointer Using the Indirection Operator*/

int main(void)
{
	int num = 5;
	int *pi = &num;

	printf("%p\n", *pi);
	
	*pi = 66;
	printf("%d\n", *pi);

	printf("value of pi: %d\n",(void*) pi);/* prints the address of num(5)*/
	
	printf("Address of pi: %d", &pi);
	return 0;
}
