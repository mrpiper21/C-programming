#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
    int n;
    printf("size: ");
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++){
        array[i] = i * 2;
        printf("%d\n", array[i]);
    }

    // Check if a lowercase string's characters are in alphabetical order. If yes, print "Yes". If no, print "No".
    
    char first_name[20];
    printf("Enter first name: ");
    scanf("%s", &first_name);
    int c = strlen(first_name);

    for (int i = 0; i < c; i++){
        if (first_name[i] >= first_name[i + 1]){
            printf("yes\n");
        }else {
            printf("no\n");
        }
    }
}