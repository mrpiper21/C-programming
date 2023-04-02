#include <stdio.h>
#include <stdlib.h>
/**
 * sumofelement - prints outs the sum of elements in an array
 */

int sumOfelements(int c[], int size)
{
    int a, sum = 0;
    for(a = 0; a < size; a++)
    {
        sum+= c[a];
    }
    return (sum);
}
int main(void)
{
    int c[] = {3,5,3,8};
    int size = sizeof(c)/sizeof(c[0]);
    int total = sumOfelements(c, size);
    printf("sum of elements = %d\n", total);
}
