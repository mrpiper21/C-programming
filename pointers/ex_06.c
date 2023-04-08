#include <stdio.h>
/*the third character of the names' second element is displayed with two dif‐
ferent printf functions
* 
* Pointers represent a powerful tool to create and enhance applications. On the downside,
many problems can occur when using pointers, such as:
• Accessing arrays and other data structures beyond their bounds
• Referencing automatic variables after they have gone out of existence
• Referencing heap allocated memory after it has been released
• Dereferencing a pointer before memory has been allocated to it
*/

int main(void)
{
	char *names[] = {"Miller","Jones","Anderson"};
	printf("%c\n",*(*(names+1)+2));
	printf("%s\n", names[1]);
	
	int g = 5;
	int *p = &g;

	printf("Address of g: %d\n", &g);
	printf("Address of g using p as pointer: %p\n", p);
	printf("Address of p: %d\n", &p);
	printf("Value of p: %d\n", *p);
	printf("Value of p: %d\n", p);
	return 0;
}
