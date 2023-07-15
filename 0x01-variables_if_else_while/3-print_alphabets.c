#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: This is to print low and upercase.
 * Return: always 0 (success)
 */

int main(void)
{
	/*declear a variable*/
	char lowandup;

	for (lowandup = 'a'; lowandup <= 'z'; lowandup++)
	{
		putchar(lowandup);
	}
	for (lowandup = 'A'; lowandup <= 'Z'; lowandup++)
	{
		putchar(lowandup);
	}
	putchar('\n');
	return (0);
}
