#include <stdio.h>

/*
 * Since a variable of type size_t is intended for use with positive integers, using a negative
value can present problems
* The %d field interprets size_t as a signed integer. It displays a –5 because it holds a –5.
The %zu field formats size_t as an unsigned integer. When –5 is interpreted as a signed
integer, its high-order bit is set to one, indicating that the integer is negative. When
interpreted as an unsigned number, the high-order bit is interpreted as a large power
of 2. This is why we saw the large integer when we used the %zu field specifier
*/

int main(void){
	
	size_t sizet = -5;
	printf("%d\n", sizet);
	printf("%zu\n", sizet);

	int b = 10;
	printf("norm int: %d\n", sizeof(b));
	printf(" int: %d\n", sizeof(sizet));
	/*Using the sizeof operator with pointers
The sizeof operator can be used to determine the size of a pointer. The following
displays the size of a pointer to char:*/

	printf("size of *char: %d\n", sizeof(char*));
}
