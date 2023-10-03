#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - A function that write a program that adds positive numbers
 * @argc: Arg count
 * @argv: Arg value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		char *endptr;
		long num = strtol(argv[i], &endptr, 10);


		if (*endptr == '\0' && num > 0 && num <= INT_MAX)
		{
			sum += (int)num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
