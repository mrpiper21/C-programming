#include <stdio.h>
#include <string.h>

typedef struct{
    char *number[10];
    char *name[10];
}person;

int main(void){
    person people[3];

    *people[0].name = "carter";
    *people[0].number = "0271472205";

    *people[1].name = "mom";
    *people[1].number = "02483132847";

    *people[2].name = "Jemiama";
    *people[2].number = "0245452066";

    //search for name
    char Name[10];
    printf("Name: ");
    gets(Name);
    for (int i = 0; i < 3; i++){
        if (strcmp(*people[i].name, Name) == 0){
            printf("found %s\n", *people[i].number);
            return 0;
        
    }}printf("Not found\n");
    return 1;
}