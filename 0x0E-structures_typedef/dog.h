#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog struct
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Define a new type struct dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog_t;

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#enfif
