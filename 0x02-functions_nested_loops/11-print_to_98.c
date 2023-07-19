#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * print_to_98 - Prints all the numbers from input number n to 98
 * @n: first printed number
 * Description: This function takes an integer @n as input and prints all
 * integers from @n up to 98, inclusive. If @n is greater than 98, it will
 * print the numbers in descending order. Each integer is separated by a comma
 * followed by a space, and the sequence is terminated with a newline character.
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	int a, b;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a != 98)
				printf("%d, ", a);
			else if (a == 98)
				printf("%d\n", a);
		}
	}
	else if (n >= 98)
	{
		for (b = n; b >= 98; b--)
		{
			if (b != 98)
				printf("%d, ", b);
			else if (b == 98)
				printf("%d\n", b);
		}
	}
}
