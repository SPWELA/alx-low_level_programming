#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - len of 1st str, len of 2nd str, if n < 2nd, 2nd = n
 * 2nd + 1st = total len, malloc + null byte, loop to insert into temp arr
 * @s1: input one
 * @s2: input two
 * @n: s2's number of bytes
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, j, str1, str2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0' && j < n; j++)
		;
	str1 = i;
	str2 = j;
	a = malloc(sizeof(char) * (str1 + str2 + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < str1; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; j < str2; j++)
		a[i + j] = s2[j];
	a[i + j] = '\0';
	return (a);
}
