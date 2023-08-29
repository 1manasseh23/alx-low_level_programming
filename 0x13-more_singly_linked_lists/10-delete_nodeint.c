#include "lists.h"
/**
 * delete_nodeint_at_index - A function that deletes the node at
 * specified index from list
 * @head: A pointer to listint_t structur
 * @index: The index of node to delete
 * Return: 1 if success, or -1 if it faile
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *shenode;
	unsigned int x = 1;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (x < index)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			x++;
		}
		shenode = temp;
		shenode = shenode->next;
		temp->next = shenode->next;
		free(shenode);
	}
	return (1);
}
