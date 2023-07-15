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
	char za;

	for (za = 'z'; za <= 'a'; za++)
	{
		putchar(za);
	}
	putchar('\n');
	return (0);
}
