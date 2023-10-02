#include <stdio.h>
#include "main.h"


/**
 * main - A program that prints its name, followed by a new line.
 * @argc: An input integer
 * @argv: An input string
 *
 * Reyurn: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
