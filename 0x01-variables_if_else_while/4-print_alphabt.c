#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: This print lowcase without q and e.
 * Return: always 0 (success)
 */

int main(void)
{
	/*declear a variable*/
	char lcase, e, q;

	e = 'e';
	q = 'q';

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		if (lcase != e && lcase != q)
		{
			putchar(lcase);
		}
		putchar('\n');
	}
	return (0);
}
