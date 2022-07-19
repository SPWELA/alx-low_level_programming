#include "lists.h"
#include <stdio.h>
/**
* print_listint - Entry point
* Description - A function that prints all
* the elements of a listint_t list
* *@h: the function accepts an input saved into h
* Return: Success (node)
*/
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
