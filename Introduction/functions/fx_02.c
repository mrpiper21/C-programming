#include <stdio.h>

// function calls
void valid_triangle(int lenght, int base, int height);

void valid_traingle(int lenght, int base, int height){
    if ((lenght + base) > height || (lenght + height) > base || (base + height) > lenght){
        for (int i = 0; i < height; i++){
            printf("|");
            for (int i = 0; i < base; i++){
                printf(" \"");
                for (int i = 0; i < lenght; i++){
                    printf("_");
                }
            }
        }printf("\n");
        return "true";
    }  else {
        return "false";
    }
    
}

int main(void){
    int l, b, h;
    l = 5;
    b = 3;
    h = 7;
    valid_traingle(l, h, b);
}