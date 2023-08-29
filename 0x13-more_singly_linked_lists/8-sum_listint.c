#include "lists.h"
/**
 * sum_listint - A function that return the sum of all the data n of list
 * @head: A pointer to listint_t structure
 * Return: The sum of all data n from list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);


	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
