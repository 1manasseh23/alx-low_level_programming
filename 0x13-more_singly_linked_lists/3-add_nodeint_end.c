#include "lists.h"
/**
 * add_nodeint_end - A function that add a new node to the end of list
 * @head: A pointer to list structure
 * @n: An integer data put into the new node
 * Return: The address of the new element, or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *first_node, *temp;

	first_node = malloc(sizeof(listint_t));
	if (first_node == NULL)
		return (NULL);

	first_node->n = n;
	if (*head == NULL)
	{
		first_node->next = *head;
		*head = first_node;
	}
	else
	{
		first_node->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = first_node;
	}
	return (first_node);
}
