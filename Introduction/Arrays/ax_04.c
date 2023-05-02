#include <stdio.h>

int foo[5]=  {1, 2, 3, 4, 5};
int bar[5];

int main(void){
    int i;
    for (i = 0; i < 5; i++){
        bar[i] = foo[i];
        printf("%d\n", bar[i]);
    }
}