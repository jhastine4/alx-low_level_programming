#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	srand(time(0));
	n = rand - RAND_MAX / 2;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	        putchar('\n');

		return (0);
}		
