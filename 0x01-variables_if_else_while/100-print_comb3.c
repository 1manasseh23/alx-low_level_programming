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

	for (t = 0; t < 90; t++)
	{
		putchar((t / 4) + '0');
		putchar((t % 4) + '0');
		if (t != 90)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');


	return (0);
}
