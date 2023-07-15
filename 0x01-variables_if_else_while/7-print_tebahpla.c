#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: This print alphabet a to z in reverse.
 * Return: always 0 (success)
 */


int main(void)
{
	char miro;

	for (miro = 'z'; miro >= 'a'; miro--)
	{
		putchar(miro);
	}
	putchar('\n');
	return (0);
}
