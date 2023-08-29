#include "lists.h"
/**
 * insert_nodeint_at_index - A function that insert node at a given index
 * @head: A pointer to listint_t structur
 * @idx: The index of the list
 * @n: An integer data for new node
 * Return: The address to new node at specified index, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 1;
	listint_t *first_node, *temp;

	if (head == NULL)
		return (NULL);

	first_node = malloc(sizeof(listint_t));
	if (first_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = first_node;
		first_node->next = NULL;
		first_node->n = n;
		return (first_node);
	}

	if (idx == 0)
	{
		first_node->next = *head;
		first_node->n = n;
		*head = first_node;
		return (first_node);
	}

	temp = *head;
	while (x < idx)
	{
		temp = temp->next;
		x++;
	}

	first_node->n = n;
	first_node->next = temp->next;
	temp->next = first_node;
	return (first_node);
}
