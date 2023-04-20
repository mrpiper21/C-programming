#include <stdio.h>

/*sort - sort given values in an assending order*/

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

int main(void)
{
	int m = 4, v = -5, p = 2;
	sort(m, v, p);

	;return 0;
}
