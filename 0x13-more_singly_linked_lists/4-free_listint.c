#include "lists.h"
#include <stdio.h>

/**
  * free_listint - free list
  * @head: pointer to the head of listint_t
  */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
		temp = NULL;
	}
}
