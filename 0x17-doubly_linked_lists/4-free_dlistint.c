#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - A function that frees a dlistint_t list
 * @head: Pointer to the first head in list
 * Return: Free node or NULL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *crt = head;
	dlistint_t *free_nt;

	while (crt != NULL)
	{
		free_nt = crt->next;
		free(crt);
		crt = free_nt;
	}
}
