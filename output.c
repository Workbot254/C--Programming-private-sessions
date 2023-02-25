#include <stdio.h>
/**
 * main - start of the program
 * Reuturn: always 0;
 */
int main(void)
{
	int two, three, six;

	two = 2;
	three = 3;
	six = 6;

	int result = (two + three) * six / three;

	printf("The result of these is (%d + %d) * %d / %d\n", two, three, six, three);
	printf("The result of that is %d\n", result);
	return (0);
}
