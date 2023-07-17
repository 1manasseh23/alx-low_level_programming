#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: This print possible different combinations of three digits.
 * Return: always 0 (success)
 */

int main(void)
{
	int b, c;


	for (b = '0'; b < '9'; b++)
	{
		for (c = b + 1; c <= '9'; c++)
		{
			putchar((b / 10) + '0');
			putchar((c % 10) + '0');
			putchar(' ');
			putchar((c / 10) + '0');
			putchar((c % 10) + '0');

			if (b == 98 && c == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
