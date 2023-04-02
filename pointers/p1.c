/**
 * Pointers and arrays
 */
#include <stdio.h>
int main(void)
{
	int c[] = {3, 6, 8, 2, 9};
	printf("%d\n", c); /*address of the first element in the array*/
	printf("%d\n", &c[0]); /*Also prints the address of the first element in the array*/
	printf("%d\n", c[0]); /*prints the first element in the array*/
	printf("%d\n", *c); /*print the first element in the array*/

	return 0;
}
