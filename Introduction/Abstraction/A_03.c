#include <stdio.h>

int get_negative_int(void);

int main(void){
    int i = get_negative_int();
    printf("%i\n", i);
}

int get_negative_int(void){
    int n;
    do{
        printf("Enter negative number: ");
        scanf("%d", &n);
    }while (n >= 0);
    return n;
}