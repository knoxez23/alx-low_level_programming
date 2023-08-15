#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog structure.
 * @name: Name
 * @age: Age
 * @owner: Owner
 *
 * Return: Pointer to new dog structure, or NULL if allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int length_nam = 0, length_own = 0;

	if (name != NULL && owner != NULL)
	{
		length_nam = _strlen(name) + 1;
		length_own = _strlen(owner) + 1;
		newDog = malloc(sizeof(dog_t));

		if (newDog == NULL)
			return (NULL);

		newDog->name = malloc(sizeof(char) * length_nam);

		if (newDog->name == NULL)
		{
			free(newDog);
			return (NULL);
		}

		newDog->owner = malloc(sizeof(char) * length_own);

		if (newDog->owner == NULL)
		{
			free(newDog->name);
			free(newDog);
			return (NULL);
		}

		_strcpy(newDog->name, name);
		_strcpy(newDog->owner, owner);
		newDog->age = age;
	}

	return (newDog);
}

/**
 * _strlen - Returns the length of a string.
 * @s: String to count.
 *
 * Return: String length.
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
 * _strcpy - Copy a string.
 * @dest: Destination value.
 * @src: Source value.
 *
 * Return: Pointer to the destination value.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

