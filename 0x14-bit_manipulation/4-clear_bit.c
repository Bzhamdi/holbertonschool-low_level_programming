#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n:int
 * @index:index
 *
 * Return: new int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bint;

	if (index > 64)
		return (-1);
	bint = ~(1 << index);
	*n = *n & bint;
	return (1);
}
