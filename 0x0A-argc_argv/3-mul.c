#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that Write a program that multiplies two numbers
 * @argc: Arg count
 * @argv: Arg value
 * Return: 0
 */

int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;


	printf("%d\n", result);

	return (0);
}
