#include <stdio.h>

int sort(int a, int b, int c);

int main(void)
{
	int j, q, b;
	printf("first num: \n");
	scanf("%d", &j);
	printf("second num: \n");
	scanf("%d", &q);
	printf("Third num: \n");
	scanf("%d", &b);

	printf("sorted = %d", sort(j, q, b));
}

int sort(int a,int b, int c)
{
	int num1, num2, num3;

	if (a < b && a < c)
	{
		num1 = a;
		if (b < c)
		{
			num2 = b;
			num3 = c;
		}
	}
	if (b < a && b < c)
	{
		num1 = b;
		if (a < c)
		{
			num2 = a;
			num3= c;
		}
	}
	if (c < a && c < b)
	{
		num1 = c;
		if (b < a)
		{
			num2 = b;
			num3 = a;
		}
	}

	return (num1, num2, num3);
}
