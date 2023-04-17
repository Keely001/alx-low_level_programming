#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a structure
 * @d: pointer to the fst location
 * @name: its name
 * @age: its age
 * @owner: its owner.
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(dog));
	if (d == NULL)
		return (NULL);
	d = &dog;
	(*d).name = *name;
	(*d).age = *age;
	(*d).owner = *owner;
}
