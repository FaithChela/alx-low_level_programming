#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int p, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	p = ci = 0;
	while (s1[p] != '\0')
		p++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (p + ci + 1));

	if (conct == NULL)
		return (NULL);
	p = ci = 0;
	while (s1[p] != '\0')
	{
		conct[p] = s1[p];
		p++;
	}

	while (s2[ci] != '\0')
	{
		conct[p] = s2[ci];
		p++, ci++;
	}
	conct[p] = '\0';
	return (conct);
}
