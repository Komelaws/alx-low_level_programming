#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Details of a dog
 * @name: Name of the dog
 * @age: The age of the dog
 * @owner: The owners name
 *
 * Description: This is a the full information of my dog
 */
struct dog {
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif
