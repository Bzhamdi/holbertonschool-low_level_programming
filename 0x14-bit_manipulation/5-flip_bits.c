#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need to flip.
 * @n: nb1
 * @m: nb2
 * Return: bits you would need to flip.
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int i, diff = 0;
unsigned long int xor;

	xor = n ^ m;
	for (i = 0; i < 64; i++)
	{
		if ((xor & 1) != 0)
			diff++;
		xor = xor >> 1;
	}
	return (diff);
}
