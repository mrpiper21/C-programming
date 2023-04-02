/*printing all address and elements of an array*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[] = {5, 2, 9, 1};
	int c;
	for (c = 0; c < 4; c++)
	{
		printf("Address: %d\n", &a[c]);
		printf("Address: %d\n", a + c);
		printf("value: %d\n", *(a + c));
		printf("Value: %d\n", a[c]);
	}
	return 0;
}
