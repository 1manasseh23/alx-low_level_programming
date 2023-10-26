#include <stdio.h>
#include "main.h"
/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: The number to get the bit
 * @index: The index of bit to be retreve
 * Return: The value of bit index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value = 1UL << index;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	if (n & value)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
