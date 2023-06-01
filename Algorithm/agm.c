#include <stdio.h>
#include <string.h>
int main(void){
    char* name[] = {"Ben", "Nigel", "Dorcas"};
    //char numbers[] = {"+44-544-534", "+44-356-645"};

    char NAME[10];
    printf("Name: ");
    gets(NAME);
    for (int i = 0; i < 2; i++){
        if (strcmp(name[i], NAME) == 0){
            printf("found %s", name[i]);
            return 0;
        }
    }printf("not found");
    return 1;
}