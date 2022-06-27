#include "main.h"
#include <stdlib.h>
/**
* *create_array - Entry point
* Description - A function that creates an array of chars,
* and initializes it with a specific char
* *@size: the function accepts an input saved into size
* *@c: the function accepts an input saved into c
* Return: Nothing for now
*/
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(size * sizeof(*a));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
}
