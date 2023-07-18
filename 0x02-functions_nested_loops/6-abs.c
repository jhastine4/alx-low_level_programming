#include "main.h"
#include <stdio.h>

/**
 * main - computes the absolute value of an integer.
 *
 * Return: Always 0.
 */
int _abs(int)
{
	int num;

	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
