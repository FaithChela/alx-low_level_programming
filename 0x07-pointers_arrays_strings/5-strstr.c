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
	int p, d;

	for (p = 0; haystack[p] != '\0'; p++)
	{
		for (d = 0; needle[d] != '\0'; d++)
		{
			if (haystack[p + d] != needle[d])
				break;
		}
		if (!needle[d])
			return (&haystack[p]);
	}
	return (NULL);
}
