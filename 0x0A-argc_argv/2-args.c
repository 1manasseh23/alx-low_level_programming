#include "main.h"
#include <stdio.h>
/**
 * main - A program that prings all the arguement it receives
 * @argc: The arguement count
 * @argv: The arguement value
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
