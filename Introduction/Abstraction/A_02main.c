#include "header.h"
#include <stdio.h>

int main(void){
    int num1, num2, num3;
    printf("Enter a number: ");
    scanf("%d", &num1);
	printf("Enter a number: ");
	scanf("%d", &num2);
	printf("Enter a number: ");
	scanf("%d", &num3);

	sort(num1, num2, num3);
	return 0;
}
