#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: This print number to 10 from 0.
 * Return: always 0 (success)
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("x is %d\n", x);
		x = x++;
	}
	return (0);
}
