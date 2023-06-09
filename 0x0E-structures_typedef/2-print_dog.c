#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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

	if (!d->age || d->owner == NULL)
	{
		printf("(nil)");
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
