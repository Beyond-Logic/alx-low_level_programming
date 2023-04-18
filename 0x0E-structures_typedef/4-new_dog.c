#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * new_dog - New Dog
  * @name: name
  * @age: age
  * @owner: owner
  *
  * Description: Dog with name, age, and owner
  * Return: new_dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
