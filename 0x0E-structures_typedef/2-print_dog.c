#include "main.h"
#include <stdio.h>

/**
  * print_dog - Dog
  * @d: d
  * Description: Dog
  */

void print_dog(struct dog *d)
{
	printf("Name: %s \n", d->name);
	printf("Age: %f \n", d->age);
	printf("Owner %s", d->owner);
}
