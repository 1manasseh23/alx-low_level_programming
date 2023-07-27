#include "main.h"
/**
 * reverse_array - a function that reverse an array.
 * @a: an input array
 * @n: number of elements of array
 * Return: 0 (succes)
 */
void reverse_array(int  *a, int n)
{
	int d = 0;
	int vex;


	while (d < n--)
	{
		vex = a[d];
		a[d++] = a[n];
		a[n] = vex;
	}
}
