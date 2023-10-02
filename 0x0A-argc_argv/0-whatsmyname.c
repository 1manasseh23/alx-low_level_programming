#include <stdio.h>
#include "main.h"


/**
 * main - This the main function of the program. its takes two parameter,
 * @argc: Argument count
 * @argv: Argument value, a string that come after calling function
 *
 * Return: 0 success.
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
