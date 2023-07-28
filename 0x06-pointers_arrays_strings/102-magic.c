#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int z[5];
	int *b;

	z[2] = 1024;
	b = &n;
	/*
	 * write your line of code
	 * Remember: - you are not allow to use a
	 * - you are not allow to use p, only one statement
	 * - you are not allowed to code anything else than this line of code
	 */
	*(z + 5) = 98;
	/* ...so that this can prints 98\n */
	printf("z[2] = %d\n", z[2]);
	return (0);
}
