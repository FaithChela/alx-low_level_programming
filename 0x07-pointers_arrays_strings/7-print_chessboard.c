#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: two dimension array to print
 */
void print_chessboard(char (*a)[8])
{
	int p, d;

	for (p = 0; p < 8; p++)
	{
		for (d = 0; d < 8; d++)
		{
			_putchar(a[p][d]);
		}
		_putchar('\n');
	}
}
