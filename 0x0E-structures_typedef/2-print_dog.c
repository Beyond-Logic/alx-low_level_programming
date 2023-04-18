#include "main.h"
#include <stdio.h>

/**
  * print_dog - Dog
  * @d: d
  * Description: Dog
  */

void print_dog(struct dog *d)
{
	printf("Name: \n", d->name);
	printf("Age: \n", d->age);
	printf("Owner \n", d->owner);
}
