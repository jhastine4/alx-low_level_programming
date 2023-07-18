#include "main.h"
#include <stdio.h>

/**
 * main - Prints the sign of a number.
 *
 * Description: this function prints the sign of number n
 *
 * Retur: 0 if n is zero, 1 if n is > than 0 and -1 is n is < 0
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return	(1);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
