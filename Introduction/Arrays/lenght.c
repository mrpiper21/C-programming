#include <stdio.h>
#include <string.h>

int main(void){
    // prompt user for name

    char name[20];
    printf("Enter name: ");
    scanf("%s", &name);
    // count number of characters up until "\0"
    int count = 0;
    while(name[count] != '\0'){
        count++;
        printf("%c", name[count]);
    }printf("\n%d\n", count);

    // lenght of a string
    int lenght = strlen(name);
    printf("%d\n", lenght);
    return 0;
}