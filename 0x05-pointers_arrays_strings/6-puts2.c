#include "main.h"

/**
 * puts2 -  prints 1 out of 2 char of a string, starting with the first character
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int len, j;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (j = 0; j < len; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
