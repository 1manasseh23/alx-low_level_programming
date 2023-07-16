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
	int b, c, a;


	for (b = '0'; b < '9'; b++)
	{
		for (c = b + 1; c <= '9'; c++)
		{
			for (a = c +1; a <= '9'; a++)
			{
				if ((a != b) !=)
				{
					putchar(b);
					putchar(c);
					putchar(a);

					if (b== '7' && c == '8')
						continue;
					putchar(',');
					putchar(' ');	
				}
			}
		}
	}
}
