#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 *
 * Return: void
 */

void print_alphabet(void)
{
	char let = 'a';

	while (let <= 'z')
	{
		_putchar(let);
		let++;
	}
	_putchar('\n');
}


