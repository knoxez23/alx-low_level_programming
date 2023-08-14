#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize variable of type struct dog
 * @d: struct
 * @name: Name
 * @age: Age
 * @owner: Owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
