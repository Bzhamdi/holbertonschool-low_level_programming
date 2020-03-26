#include <stdio.h>
#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0, n = 0;

	if (b == NULL)
		return (0);

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
	}

	while (b[i])
	{

		if (b[i] == '1')
			n += 1 << (j - i - 1);
		i++;
	}
	return (n);
}
