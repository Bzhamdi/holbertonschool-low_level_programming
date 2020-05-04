#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _isdigit - check the number inserted
 * @n: number recieved (param)
 *
 *Return: 1 is digit 0 not digit
 */
int _isdigit(int n)
{
if (n >= 48 && n <= 57)
return (1);
else
return (0);
}
