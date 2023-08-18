#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode of own main function
 * @argc: argumen count
 * @argv: array of arguments
 * Return: 1 or 2 on fail, 0 on success
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *my_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	my_ptr = (unsigned char *)main;
	i = 0;
	if (bytes > 0)
	{
		while (i < (bytes - 1))
			printf("%02hhx ", my_ptr[i++]);
		printf("%hhx\n", my_ptr[i]);
	}
	return (0);
}
