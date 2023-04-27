#include "lists.h"
#include <stdio.h>

/**
  * free_list - free list
  * @head: pointer to the head of list_t
  */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
