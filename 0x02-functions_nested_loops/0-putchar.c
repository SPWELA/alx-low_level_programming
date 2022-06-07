#include <main.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int _putchar(char)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
