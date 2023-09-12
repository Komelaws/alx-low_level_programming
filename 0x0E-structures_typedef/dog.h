#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog profile
 * @name: Name of the dog
 * @age: The age of the dog
 * @owner: Name of the owner
 *
 * Desription: The full details of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

#endif
