#include "main.h"

/**
 * void spw - spwas int
 * @a : to swop
 * Return (void)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
