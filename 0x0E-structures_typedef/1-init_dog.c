#include "main.h"

/**
  * init_dog - Dog
  * @d:  dog
  * @name: name
  * @age: age
  * @owner: owner
  *
  * Description: Dog with name, age, and owner
  * Return: Return
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
