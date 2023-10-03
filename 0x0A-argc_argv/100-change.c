#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * main - A function write a program that prints the minimum
 * number of coins to make change for an amount of money
 * @argc: Arg count
 * @argv: Arg value
 * Return: 1 if the number of arguments passed is not exactly or 0
 */

int main(int argc, char *argv[])
{
	int coins = 0;
	int cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	if (cents >= 25)
	{
		coins += cents / 25;
		cents %= 25;
	}

	if (cents >= 10)
	{
		coins += cents / 10;
		cents %= 10;
	}

	if (cents >= 5)
	{
		coins += cents / 5;
		cents %= 5;
	}

	coins += cents;

	printf("%d\n", coins);

	return (0);
}
