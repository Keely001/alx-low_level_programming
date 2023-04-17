#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

int str_len(char *s);
/**
 * new_dog - creates a new dog
 * @name: its name
 * @age: its age
 * @owner: its owner
 * Return: point to its info
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0;
	int j = 0;
	dog_t *s;

	i = str_len(name);
	j = str_len(owner);
	s = malloc(sizeof(dog_t));
	if (s == NULL)
		return (NULL);
	s->name = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	s->name = name;
	s->age = age;
	s->owner = malloc(sizeof(char) * (j + 1));
	if (s == NULL)
	{
		free(s);
		free(s->name);
		return (NULL);
	}
	s->owner = owner;
	return (s);
}
/**
 * str_len - length of words
 * @s: pointer to array
 * Return: pointer to string
 */

int str_len(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
