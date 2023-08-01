#include "main.h"
/**
 * print_chessboard - a function that print a chessboard
 * @a: an array input to print
 * Return: 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, g;

	for (; i < 8; i++)
	{
		for (g = 0; g < 8; g++)
		{
			_putchar(a[i][g]);
		}
		_putchar('\n');
	}
}
