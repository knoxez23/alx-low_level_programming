#include <stdio.h>
#include <stdlib.h>
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
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.1f\n", d->age  ? d->age : 0);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nill)");
	}
}
