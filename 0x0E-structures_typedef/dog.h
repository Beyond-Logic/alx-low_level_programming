#ifndef DOG_H
#define DOG_H

/**
  * struct dog - Dog
  * @name: name
  * @age: age
  * @owner: owner
  *
  * Description: Dog with name, age, and owner
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif /* DOG_H */
