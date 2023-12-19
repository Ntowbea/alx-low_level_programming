#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char let;
	int i;

	for (i = 0; i < 10; i++)
	{
		let = 'a';

		while (let <= 'z')
		{
			_putchar(let);
			let++;
		}
		_putchar ('\n');
	}
}

