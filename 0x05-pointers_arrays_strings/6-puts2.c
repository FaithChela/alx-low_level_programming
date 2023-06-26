#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int d, i;

	d = 0;

	while (str[d] != '\0')
	{
		d++;
	}

	for (i = 0; i < d; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
