#include "main.h"
#include <stdio.h>

/**
 * main - A function write a program that prints the number
 * of arguments passed into it
 * @argc: Argument count
 * @argv: Argument value
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
