#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: This is to print alphabet in lowercase
 * Return: always 0 (success)
 */

int main(void)
{
	/*declear a virible*/
	char alpbt;

	for (alpbt = 'a'; alpbt <= 'z'; alpbt++)
	{
		putchar(alpbt);
	}
	putchar('\n');
	return (0);
}
