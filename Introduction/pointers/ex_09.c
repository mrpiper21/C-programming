#include <stdio.h>
/*Subtracting an integer from a pointer*/

int main(void){
    int vector[] = {54, 3, 7, 39};
    printf("%d\n", vector);
    int *p = vector + 2;
    printf("p: %d\n", p);

    printf("%d\n", *p); // 7
    p--;
    printf("%d\n", *p); // 3
    p--;
    printf("%d\n", *p); // 54
    
    return (0);
}