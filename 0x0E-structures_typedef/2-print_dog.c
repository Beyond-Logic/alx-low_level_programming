#include "main.h"
#include <stdio.h>

/**
  * print_dog - Dog
  * @d: d
  * Description: Dog
  * Return: return
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner %s\n", d->owner);
}
