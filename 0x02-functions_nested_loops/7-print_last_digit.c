#include "main.h"
#include <stdio.h>

/**
 * main - Prints the last digit of a number
 *
 * Return: value of the last digit.
 */
int print_last_digit(int num)
{
	int n;

	if (num < 0)
		num = -num;

	n = num % 10;		

	if (n < 0)
		n = -n;

	_putchar(n + '0');

	return (num % 10);
}
