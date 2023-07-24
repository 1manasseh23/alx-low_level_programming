#include "main.h"
 /**
  * swap_int - A function that swap the values of two integers.
  * @a: an inout integer pointer
  * @b: an input integers pointer
  * Description: Void swap_int function swaps the values of two integers.
  * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
