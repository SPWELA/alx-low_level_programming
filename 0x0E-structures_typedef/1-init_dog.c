#include "dog.h"
#include <stdlib.h>
/**
* init_dog - Entry point
* Description - A function that initialize a variable of type struct dog
* *@d: the function accepts an input saved into d
* *@name: the function accepts an input saved into name
* *@age: the function accepts an input saved into age
* *@owner: the function accepts an input saved into owner
* Return: Nothing for now
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
