#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: This print possible different combinations of two digits.
 * Return: always 0 (success)
 */

int main(void)
{
	int t;

	for (t = 0; t < 100; t++)
	{
		putchar((t / 10) + '0');
		putchar((t % 10) + '0');
		if (t != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
