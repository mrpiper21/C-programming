#include <stdio.h>
#include <ctype.h>

int main(void){
    char name[20];
    printf("Before: ");
    scanf("%s", &name);
    int n = strlen(name);
    for (int i = 0; i < n; i++){
        if (name[i] >= 'a' && name[i] <= 'z'){
            printf("%c", name[i] - 32);
        }else{
            printf("%c", name[i]);
        }
    }printf("\n");
}