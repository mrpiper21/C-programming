#include <stdio.h>

int main(void)
{
	int *p, x;
	p = &x;
	*p = x;
	x = 5;

    int c;
    int i;
    for (i = 0; i < 5; i++)
    {
        c = *p++;
        printf("%d\n", c);
    }
	/*int y;
	y = *p + 1;
	printf("%d\n", y);
	printf("%d\n", &x);*/

	return 0;
}
