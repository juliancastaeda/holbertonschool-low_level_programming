#include "holberton.h"

/**
 *print_chessboard - Print chessboard
 *@a: print array
 *
 *return: always (0).
 */
void print_chessboard(char (*a)[8])
{
	int n, m;

	for (n = 0; n < 8; n++)
	{
		for (m = 0; m < 8; m++)
		{
			_putchar(a[n][m]);
			if (m == 7)
			{
				_putchar('\n');
			}
		}
	}
}
