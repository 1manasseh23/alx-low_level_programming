#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - A function that returns the sum of all
 * the data (n) of a listint_t linked list
 * @head: Pointer to data struct
 * Return: 0
 */


int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
