#include "lists.h"
#include <stdio.h>

/**
  * free_listint2 - free list
  * @head: pointer to the head of listint_t
  */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	
	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
