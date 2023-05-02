#include "lists.h"
#include <stdio.h>

/**
  * insert_nodeint_at_index - Insert Node at Index
  * @head: pointer to the head of listint_t
  * @idx: idx
  * @n: n
  * Return: Return
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	current_node = *head;

	for (i = 0; i < idx - 1 && current_node != NULL; i++)
	{
		current_node = current_node->next;
	}

	if (current_node == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);

}