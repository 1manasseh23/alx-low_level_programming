#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - A program that add positive numbers
 * @argc: The arguement' counter
 * @argv: The arguement's values
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int num, result = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
