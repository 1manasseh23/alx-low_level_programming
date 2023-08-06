#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints the number of arguement you passed into it
 * @argc: An arguement counter
 * @argv: An aguement value
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
