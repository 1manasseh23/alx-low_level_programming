#include "main.h"
#include <stdio.h>

/**
 * main - A function that write a program that prints
 * all arguments it receives
 * @argc: Argument count
 * @argv: Argument value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
		while (argv[i])
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}

	return (0);
}
