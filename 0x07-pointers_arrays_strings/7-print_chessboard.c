#include "main.h"

/**
 *  print_chessboard - a function that prints a chessboard.
 *  @a: the chessboard to be printed.
 */

void print_chessboard(char (*a)[8])
{
	int black;
	int white;

	for (black = 0; black < 8; black++)
	{
		for (white = 0; white < 8; white++)
		{
			_putchar(a[black][white]);
		}
		_putchar('\n');
	}
}
