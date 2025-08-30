#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the list
 * @idx: Index where the new node should be added (starting from 0)
 * @n: Data to store in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	/* If inserting at the beginning, use add_dnodeint */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Traverse the list to find the (idx - 1) node */
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	/* If the index is out of bounds */
	if (!temp)
		return (NULL);

	/* If inserting at the end, use add_dnodeint_end */
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	/* Insert the new node */
	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
