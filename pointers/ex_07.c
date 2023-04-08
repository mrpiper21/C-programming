#include <stdio.h>
/*Dereferencing a Pointer Using the Indirection Operator*/

int main(void)
{
	int num = 5;
	int *pi = &num;

	printf("%p\n", *pi);
	
	*pi = 66;
	printf("%d\n", &num);

	printf("%d\n",(void*) pi);

	return 0;
}
