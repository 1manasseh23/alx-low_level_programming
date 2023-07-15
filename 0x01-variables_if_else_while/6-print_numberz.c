#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: This print number 10 from 0.
 * Return: always 0 (success)
 */

int main(void)
{
	int g;

	for (g = 0; g < 10; g++)
	{
		putchar(g);
	}
	putchar('\n');
	return (0);
}
