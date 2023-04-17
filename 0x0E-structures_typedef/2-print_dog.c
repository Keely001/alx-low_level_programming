#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a structure
 * @d: pointer to a structure
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name : %s\n", (d->name));
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
