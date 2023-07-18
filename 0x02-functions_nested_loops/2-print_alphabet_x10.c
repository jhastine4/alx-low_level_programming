#include "main.h"
#include <stdio.h>

/**
 * main - Prints the alphabet in lowecase 10 times.
 *
 * Description: This function prints the english alphabet 10 times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
	}
}
