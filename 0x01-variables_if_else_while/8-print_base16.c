#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: This print numbers of base 16 in lowercase.
 *Return: always 0 (success)
 */

int main(void)
{
	int num;
	char hit;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (hit = 'a'; hit <= 'f'; hit++)
	{
		putchar(hit);
	}
	putchar('\n');
	return (0);
}
