#include <stdio.h>

void first_struct(void) __attribute__((constructor));
/**
 * first_struct - A function that print before the main functio
 * Return: 0
 */
void first_struct(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
