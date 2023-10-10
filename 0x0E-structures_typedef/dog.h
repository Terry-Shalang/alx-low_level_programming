#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog details
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner
 *
 * Description: struct to store dogs details
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
