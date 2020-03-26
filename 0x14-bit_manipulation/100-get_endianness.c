#include "holberton.h"
/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if > and 1 if  <
 *
 *
*/
int get_endianness(void)
{
	char *str;
	int a;


	a = 1;
	str = (char *) &a;
	if (*str)
		return (1);
	else
		return (0);
}
