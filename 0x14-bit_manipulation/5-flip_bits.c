#include <stdio.h>
#include "main.h"

/**
 * flip_bits - counts the number of bits to change.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int cnt = 0;

	while (result > 0)
	{
		cnt += result & 1;
		result >>= 1;
	}
	return (cnt);
}
