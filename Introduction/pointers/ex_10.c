#include <stdio.h>
/*Subtracting two pointers*/

int main(void){
    int vector[] = {56, 3, 9};
    int *p0 = vector;
    int *p1 = vector + 1;
    int *p2 = vector + 2;

    printf("p2-p0: %d\n", p2-p0);
    printf("p2-p1: %d\n", p2-p1);
    printf("p0-p1: %d\n", p0-p1);

    return (0);
}