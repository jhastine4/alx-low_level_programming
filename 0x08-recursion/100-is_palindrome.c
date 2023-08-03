#include "main.h"

int pal_checker(char *s, int i, int j);
int _strlen_recursion(char *s);

/**
 * _strlen_recursion - Pints the length of a string
 * @s: the string to be printed
 * Return: the length of strinh
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * pal_checker - Check if s is palindrome
 * @s: string base address
 * @i: left index
 * @j: right index
 * Return: 1 if s is palindrome, 0 otherwise
 */
int pal_checker(char *s, int i, int j)
{
	if (*(s + i) != *(s + j - 1))
		return (0);
	if (i >= j)
		return (1);
	return (pal_checker(s, i + 1, j - 1));
}

/**
 * is_palindrome - Check if s is palindrome
 * @s: base address for string
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s - 1)));
}
