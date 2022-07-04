#include "dog.h"
#include <stdio.h>
/**
* free_dog - Entry point
* Description - A function that takes a pointer of a struct dog
* *@d: the function accepts a pointer input saved into d
* Return: Nothing for now
*/
void free_dog(dog_t *d)
{
if (d)
{
free((*d).name);
free((*d).owner);
free(d);
}
}
