#include <stdio.h>

//sort - sort given values in an assending order

int ge_num(void);
void sort(int a, int b, int c);

void sort(int a, int b, int c)
{
        int num1, num2, num3;

        if (a < b && a < c){
		num1 = a;
        	if (b < c){
                	num2 = b;
                	num3 = c;
			printf("The sorted values are: %d, %d, %d\n", num1, num2, num3);
		}else{
			num2 = c;
			num3 = b;
			printf("The sorted values are: %d, %d, %d\n", num1, num2, num3);
		}
    	}
	if (b < a && b < c){
		num1 = b;
        	if (a < c){
            		num2 = a;
            		num3 = c;
			printf("The sorted values are: %d, %d, %d\n", num1, num2, num3);
        	}
		else{
			num2 = c;
			num3 = a;
			printf("The sorted values are: %d, %d, %d\n", num1, num2, num3);
		}
    	}
	if (c < a && c < b){
		num1 = c;
        	if (b < a){
            		num2 = b;
            		num3 = a;
			printf("The sorted values are: %d, %d, %d\n", num1, num2, num3);
        	}
		else{
			num2 = a;
			num3 = b;
			printf("The sorted values are: %d, %d, %d\n", num1, num2, num2);
		}
	}
}

int get_num(void){
	int num1, num2, num3;
    printf("Enter a number: ");
    scanf("%d", &num1);
	printf("Enter a number: ");
	scanf("%d", &num2);
	printf("Enter a number: ");
	scanf("%d", &num3);
	return (num1, num2, num3);
}

int main(void)
{
	int *num = get_num();
	for (int i = 0; i < 3; i++){
		sort(num[i], num[i+1], num[i+2]);
	}
	//sort(*num[0], *num[1], *num[2]);
	return 0;
}
