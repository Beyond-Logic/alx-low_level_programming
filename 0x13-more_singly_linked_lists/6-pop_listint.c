#include "lists.h"
#include <stdio.h>

/**
  * pop_listint - pop list
  * @head: pointer to the head of listint_t
  * Return: Return
  */

int pop_listint(listint_t **head)
{
	int data;

	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);

	return (data);
}
