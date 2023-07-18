#include "main.h"
#include <stdio.h>

/**
 * main - checks for alphabetic letter c or C
 *
 * Description: This function checks for the alphabetic letter c or C
 *
 * Return 1 if c otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1); /* c is a letter */
	}
	else
	{
		return (0);
	}
}
