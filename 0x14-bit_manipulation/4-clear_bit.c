#include <stdio.h>
#include "main.h"
/**
 * clear_bit - A function that  sets the value of a bit to 0 at a given index
 * @n: The pointer to number to modify
 * @index: The index of bit to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value = 1UL << index;

	if (index >= (sizeof(unsigned int) * 8))
		return (-1);

	*n = *n & (~value);
	return (1);
}
