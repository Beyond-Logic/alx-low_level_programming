#include "lists.h"
#include <stdio.h>

/**
  * get_nodeint_at_index - get the nth node
  * @head: pointer to the head of listint_t
  * @index: index
  * Return: Return
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *currentindex;

	currentindex = head;

	for (i = 0; currentindex != NULL && i < index; i++)
	{
		currentindex = currentindex->next;
	}

	return (currentindex);
}
