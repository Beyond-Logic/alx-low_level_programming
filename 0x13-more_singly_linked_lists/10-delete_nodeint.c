#include "lists.h"
#include <stdio.h>

/**
  * delete_nodeint_at_index - Delete node at Index
  * @head: pointer to the head of listint_t
  * @index: index
  * Return: Return
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentindex, *temp;

	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);

		return (1);
	}
	currentindex = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (currentindex->next == NULL)
		{
			return (-1);
		}

		currentindex = currentindex->next;
	}
	temp = currentindex->next;
	currentindex->next = temp->next;
	free(temp);
	return (1);
}
