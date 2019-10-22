#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new dog
 * @name: variable
 * @age: variable
 * @owner: variable
 *
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a = 0, b = 0, c;
	dog_t *p;

	if (name == NULL || owner == NULL)
		return (NULL);
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	while (name[a])
	{
		a++;
	}
	while (owner[b])
	{
		b++;
	}
	p->name = malloc(sizeof(char) * (a + 1));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->age = age;
	p->owner = malloc(sizeof(char) * (b + 1));
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	for (c = 0; c <= a; c++)
	{
		p->name[c] = name[c];
	}
	for (c = 0; c <= b; c++)
	{
		p->owner[c] = owner[c];
	}
	return (p);
}
