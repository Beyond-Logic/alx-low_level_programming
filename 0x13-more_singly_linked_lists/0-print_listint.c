#include "lists.h"
#include <stdio.h>

/**
  * print_listint - Print List
  * @h: pointer to the head of listint_t
  * Return: number of elements in the list (Print List)
  */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
