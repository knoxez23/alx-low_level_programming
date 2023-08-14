#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints dod members
 * @d: dog object
 *
 * Return: void
 *
 */
void print_dog(struct dog *d)
{
	if (!d)
		return (0);

		printf("%s\n,%d\n,%s\n", *d->name, *d->age, *d->owner);

	return (0);
}
