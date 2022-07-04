#include <stdio.h>
/**
 * main - entry point
 * Description - A program that prints the name of the file it
 * was compiled from, followed by a new line
 * Return: Success (0)
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
