#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int c[5];
	c[0] = 2;
	c[2] = 4;
	int a;
	for (a = 0; a <= 5; a++)
	{
		printf("%d\n", c + a);
		printf("%d\n", *(c + a));
	}
	return 0;
}
