#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int a, j;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[a + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[a]);
	}
	return (NULL);
}
