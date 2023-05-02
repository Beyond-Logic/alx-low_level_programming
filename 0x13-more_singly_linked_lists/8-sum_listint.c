#include "lists.h"
#include <stdio.h>

/**
  * sum_listint - Sum List
  * @head: pointer to the head of listint_t
  * Return: Return
  */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *currentindex = head;

	while (currentindex != NULL)
	{
		sum += currentindex->n;
		currentindex = currentindex->next;
	}

	return (sum);
}
