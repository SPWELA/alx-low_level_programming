#include "main.h"

/**
 * strlen - returns length of string
 * @c - input 
 * return (void)
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
