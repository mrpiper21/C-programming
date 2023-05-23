#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

const int BITS_IN_BYTE = 8;

int fi;

void print_bulb(int bit);

int main(void)
{
    // TODO
    int switchh = 0;
    char enter[10];
    printf("Enter: ");
    gets(enter);
    int len = strlen(enter);
    int array[BITS_IN_BYTE];
        for (int i = 0; i < len; i++){
            fi = enter[i];
            for(int j = 0; j < BITS_IN_BYTE; j++){
                int md = (int) (fi % 2);
                array[j] = md;
                fi = fi / 2;
                switchh = array[j];
                print_bulb(switchh);
                //printf("%d", array[j]);
            }printf("\n");
        }
    return 0;
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}