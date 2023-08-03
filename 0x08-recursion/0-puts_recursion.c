#include "main.h"

/**
 * puts_recursion - prints a string, followed by a new line
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursions(s + 1);
	}
	else
		_putchar('\n');
}
