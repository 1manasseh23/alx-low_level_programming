#include "main.h"
#include <stdio.h>
/**
 * print_diagsum - a function that print the sum of the two diagonals
 * of a square matrix of intergers.
 * @a: a square matrix of integers
 * @size: an input integers with the size of matrix
 * Return: 0 (success)
 */
void print_diagsums(int *a, int size)
{
	int i = 0, max = size * size, sum1 = 0, sum2 = 0;

	for (; i < max; i += size + 1)
	{
		sum1 += a[i];
	}
	for (i = size - 1; i < max - 1; i += size - 1)
	{
		sum2 += a[i];
	}
	printf("%d, %d\n", 1, 2);
}
