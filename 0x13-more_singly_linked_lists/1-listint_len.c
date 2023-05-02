#include "lists.h"
#include <stdio.h>

/**
  * listint_len - List Length
  * @h: h
  * Return: number of elements in the linkedlist
  */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;

		h = h->next;
	}

	return (len);
}
