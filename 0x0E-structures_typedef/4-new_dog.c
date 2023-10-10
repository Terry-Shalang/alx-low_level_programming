#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - compute input string len
 * @str: String input
 * Return: string len
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;

	return (i);
}

/**
 * _strcpy - copies a string from src to dest
 * @dest: destination string
 * @src: source string
 *
 * Return: Ppinter to start of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	
	dest[i] = '\0';

	return (dest);
}

/**
 * init_dog - function that initialize a variable of type struct dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 *
 * Return: pointer to struct type dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = NULL;

	char *new_name, *new_owner;
	int new_nameLen, new_ownerLen;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_nameLen = _strlen(name);
	new_name = malloc(sizeof(char *) * (new_nameLen + 1));

	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_ownerLen = _strlen(owner);
	new_owner = malloc(sizeof(char *) * (new_ownerLen + 1));

	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = _strcpy(new_name, name);
	new_dog->age = age;
	new_dog->owner = _strcpy(new_owner, owner);

	return (new_dog);
}
