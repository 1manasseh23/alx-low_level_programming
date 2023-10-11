#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that  use atoi to convert arguments to int
 * @argc: Argument count
 * @argv: argument value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int result;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("error\n");
		return (99);
	}

	result = op(num1, num2);
	printf("%d\n", result);

	return (0);
}
