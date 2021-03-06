#include "lists.h"

/**
 * insert_node - inserts node
 * @head: head of the linked list
 * @number: data of new node
 * Return: sorted linked list with a new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = NULL;
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (!head)
		return (NULL);

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	node->n = number;
	node->next = NULL;
	next = *head;

	if (!*head)
		*head = node;
	while (prev || next)
	{
		if ((!prev || prev->n <= number) && (!next || next->n > number))
		{
			if (!prev)
				*head = node;
			else
				prev->next = node;
			node->next = next;
		}
		prev = next;
		if (next)
			next = next->next;
	}

	return (*head);
}
