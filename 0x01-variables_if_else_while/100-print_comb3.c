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
	int t, s;

	for (t = '0'; t < '9'; t++)
	{
		for (s = t + 1; s <= '9'; s++)
		{
			if (s != t)
			{
				putchar(t);
				putchar(s);
				if (t == '8' && s == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
