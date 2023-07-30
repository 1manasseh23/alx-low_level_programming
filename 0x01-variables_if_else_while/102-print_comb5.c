#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: This print  all possible combinations of two two-digit numbers
 * Return: always 0 (success)
 */

int main(void)
{
	int r, f;

	for (r = 0; r <= 98; r++)
	{
		for (f = r + 1; f <= 99; f++)
		{
			putchar((r / 10) + '0');
			putchar((r % 10) + '0');
			putchar(' ');
			putchar((f / 10) + '0');
			putchar((f % 10) + '0');

			if (r == 98 && f == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
