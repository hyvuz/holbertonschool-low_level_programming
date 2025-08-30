#include "lists.h"
#include <string.h>  /* for strdup */
#include <stdlib.h>  /* for malloc and free */

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be added to the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int str_len = 0;

	/* Calculate the length of the string */
	while (str[str_len])
		str_len++;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	/* Duplicate the string */
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);  /* Free the node if strdup fails */
		return (NULL);
	}

	new_node->len = str_len;
	new_node->next = NULL;

	/* If the list is empty, the new node becomes the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Otherwise, traverse to the end of the list and add the node */
	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;
	return (new_node);
}
