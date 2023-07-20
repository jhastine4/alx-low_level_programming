#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal.
 * @n: number of times the character _ should be printed
 * The line should end with a \n
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}else
	{
		int a;

		for(a = 0; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
