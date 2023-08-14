#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: Name
 * @age: age
 * @owner: Owner
 *
 * Return: New Dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog != NULL)
	{
		newDog->name = strdup(name); /* copy made*/
		newDog->age = age;
		newDog->owner = strdup(owner); /* copy made */

		if (newDog->name == NULL || newDog->owner == NULL)
		{
			free(newDog->name);
			free(newDog->owner);
			free(newDog);

			return (NULL);
		}
	}
}
