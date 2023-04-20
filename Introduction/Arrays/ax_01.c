#include <stdio.h>
#include <stdlib.h>
/*Multi dimensional arrays*/

int main(void)
{
    int a[3][4] = {{3,4,1,4}, {8,5,0,4}, {1,4,2,4}};
    int c, d;
    for (c = 0; c < 3; c++)
    {
        for (d = 0; d < 4; d++)
        {
            printf("a[%d][%d] = %d\n", c,d, a[c][d]);
        }
    }
    return 0;
}
