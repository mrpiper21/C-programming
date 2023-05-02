#include <stdio.h>

int set_array(int array[4]);
int set_int(int x);

int main(void){
    int a = 10;
    int bar[4] = {0, 1, 2, 3};
    set_int(a);
    set_array(bar);
    printf("%i %i\n", a, bar[0]);

    for (int i = 0; i < 4; i++){
        printf(" %i", bar[i]);
    }
}

int set_array(int array[4]){
    array[0] = 22;
}
int set_int(int x){
    x = 22;
}