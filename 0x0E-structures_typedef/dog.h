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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
