#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * check_digit - A function that checks a character is a digit
 * @c: Character to check
 *
 * Return: 0
 */

unsigned int check_digit(unsigned int num1, unsigned int num2)
{
	unsigned int result = 0;

	while (num2 >0)
	{
		if (num2 & 1)
		{
			result += num1;
			if (result < num1)
			{
				fprintf(stderr, "Error\n");
				exit(98);
			}
		}
		num1 <<= 1;
		num2 >>= 1;
	}
	return (result);
}

int main(int argc, char *argv[])
{
	unsigned int num1 = atoi(argv[1]);
	unsigned int num2 = atoi(argv[2]);
	unsigned int result;

	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		return (98);
	}

	if (num1 == 0 || num2 == 0)
	{
		fprintf(stderr, "Error\n");
		return (98);
	}

	result = check_digit(num1, num2);
	printf("%u\n", result);

	return (0);
}
