#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - A function that print a name
 * @name: A pointer to  name to print
 * @f: Function to print name
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
