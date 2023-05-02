#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * add_nodeint_end - Add node to the end of the listint_t
  * @head: pointer to the head of list_t
  * @n: n;
  * Return: Return
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;

		return (*head);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_node;

	return (new_node);
}
