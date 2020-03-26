#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number
 *
 * @index:index
 *
 * Return: value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
