#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

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
	dog_t *d;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

	return d;
}
