int triple(int x);

#include <stdio.h>

float global = 0.5050;

int main(void){
    triple(3);
    printf("%f\n", global);
}

int triple(int x){
    return global += x;
}