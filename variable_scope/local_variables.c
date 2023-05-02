#include <stdio.h>

int tripple(int x); // declaration

int main(void){
    int result = tripple(5); // var result id local to main
}

int tripple(int x){
    return x * 3; // var x is local to fx tripple
}