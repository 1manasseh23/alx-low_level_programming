#include "main.h"
#include <stdio.h>
/**
 * main - a program that print its name
 * @argc: arguement count
 * @argv: arguement value, a string that come after calling value
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
