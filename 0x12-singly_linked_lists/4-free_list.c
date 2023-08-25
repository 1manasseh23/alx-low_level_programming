#include "lists.h"
/**
 * free_list - A function that free all elements in a linked list
 * @head: point to head element of list
 * Return: 0 (success)
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
