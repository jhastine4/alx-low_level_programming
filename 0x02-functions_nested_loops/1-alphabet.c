#include "main.h"
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0.
 */
/* function declaration */
void print_alphabet(void)
	set the 'hidden' option to allow modification of multiple files
	set hidden

	" Loop through all the files in the argument list
	for file in argv()
	  " Open each file
	    execute 'edit ' . file

	      " Remove trailing whitespace from each line
	        %s/\s\+$//e

		  " Save and close the file
		    wq
		    endfor

		    " Quit Vim
		    quitall


	char letter;

		for (letter = 'a'; (letter <= 'z'); letter++)
			_putchar(letter);
			
	_putchar('\n');
}
