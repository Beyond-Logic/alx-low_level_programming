#include "main.h"
#include <stdio.h>

/**
  * print_list - Print List
  * @h: pointer to the head of list_t
  * Return: number of elements in the list
  */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", h->len, h->str);
		}
		
		nodes++;
		h = h->next;
	}

	return (nodes);
}
