#include "lists.h"
#include <stdio.h>

/**
  * free_listint - free list
  * @head: pointer to the head of listint_t
  */

void free_listint(listint_t *head)
{
	free_listint *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->n);
		free(temp);
	}
}
