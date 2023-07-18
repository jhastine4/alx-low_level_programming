#include "main.h"
#include <stdio.h>

/**
 * main - Prints the last digit of a number
 *
 * Return: value of the last digit.
 */
int print_last_digit(int num)
{
	if (num > 0)
	{
		_putchar((num % 10) + '0');
	}
	return (num % 10);
}
