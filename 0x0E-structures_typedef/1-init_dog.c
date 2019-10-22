#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize function 
 * dog - strctured
 * @name: variable name
 * @age: variable age
 * @owner: variable owner
 * @d: pointer dog
 * Description: Dog variable 
 * Return: d
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if(d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
