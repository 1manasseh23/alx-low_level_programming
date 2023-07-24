#include "main.h"
 /**
  * swap_int - a function that swap the values of two integers.
  * @a: an inoput integer pointer
  * @b: an input integers pointer
  * Description: This function swaps the values of two integers.
  * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
