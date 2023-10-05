#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - A function that concatenates all the arguments of your program
 * @ac: Number of arguments
 * @av: Array of arguments
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int x_length = 0, arg_length, curn_postn = 0;
	int i = 0, y = 0;
	char *rslt;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++)
		x_length += strlen(av[i]) + 1;

	rslt = malloc(x_length + 1);


	if (rslt == NULL)
		return (NULL);


	for (; i < ac; i++)
	{
		arg_length = strlen(av[i]);

		for (; y < arg_length; y++)
		{
			rslt[curn_postn] = av[i][y];
			curn_postn++;
		}

		rslt[curn_postn] = '\n';
		curn_postn++;
	}
	rslt[curn_postn] = '\0';

	return (rslt);
}
