#include <stdio.h>
#include <stdlib.h>
/*To pass arguments “by reference,” use pointers*/

void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
int main()
{
    int a = 3, b = 5;
    swap(&a, &b);
    printf("%d %d\n", a, b);
}
