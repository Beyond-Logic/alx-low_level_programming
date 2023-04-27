#include "lists.h"
#include <stdio.h>

/**
  * list_len - list length
  * @h: pointer to the head of list_t
  * Return: number of elements in the list
  */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
