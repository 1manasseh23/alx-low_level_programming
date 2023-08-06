#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - A program that mutiplies two numbers
 * @argc: The arguements'counter
 * @argv: The arguement' value
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
}
