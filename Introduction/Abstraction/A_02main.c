#include "header.h"
#include <stdio.h>
void sort(int a, int b, int c);

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
