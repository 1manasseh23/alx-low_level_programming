#include "lists.h"
/**
 * find_listint_loop - A function that  finds the loop in a linked list
 * @head: Pointer to struct listint_t
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *inno = head;
	listint_t *me = head;

	while (me && me->next)
	{
		inno = inno->next;
		me = me->next->next;

		if (inno == me)
		{
			inno = head;

			while (inno != me)
			{
				inno = inno->next;
				me = me->next;
			}
			return (inno);
		}
	}
	return (NULL);
}
