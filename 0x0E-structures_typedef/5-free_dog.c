#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - free a tsructure
 * @d: pointer to str
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
