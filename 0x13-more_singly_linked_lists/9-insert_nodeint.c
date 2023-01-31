#include "lists.h"
/**
 * insert_nodeint_at_index - This function inserts a
 * new node at given position
 * @head: The head node
 * @idx: The index of the list where new node is to be added
 * @n: The integer data of the new node
 * Return: The address of the new inserted node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *cp = *head;
	unsigned int count;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = cp;
		*head = new;
		return (new);
	}

	for (count = 0; count < (idx - 1); count++)
	{
		if (cp == NULL || cp->next == NULL)
			return (NULL);

		cp = cp->next;
	}

	new->next = cp->next;
	cp->next = new;

	return (new);
}
