#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, *cp;
    printf("Total number of values: ");
    scanf("%d", &n);
    cp = (int*) malloc(n*sizeof(int));

    printf("Enter values: ");
    for (i = 0; i < n; i++){
        scanf("%d", (cp + i));
    }

    printf("\n The entered values are:");
    for (i = 0; i < n; i++){
        printf("%d",*(cp + i));
    }
    free(cp);

    if (cp != NULL){
        printf("\nGood pointer");
    }else{
        printf("\nBad pointer");
    }
    return (0);
}