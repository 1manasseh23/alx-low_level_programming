#include "lists.h"
/**
 * get_nodeint_at_index - A function that return the function of a list
 * @head: A pointer to listint_t structure
 * @index: The index of node, starting at 0
 * Return: A pointer to node at specified index, or NULL if not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (x == index)
			return (head);
		head = head->next;
		x++;
	}
	return (NULL);
}
