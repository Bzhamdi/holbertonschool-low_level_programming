#include <stdio.h>
#include "holberton.h"
/**
 * _sqrt - Tests a
 * @a: The number to test with b
 * @b: The squared number to find the square
 *
 * Return: -1 else a
 */

int _sqrt(int a, int b)
{
if (a > b)
return (-1);
if ((a * a) == b)
return (a);
else
return (_sqrt(++a, b));
}

/**
 * _sqrt_recursion - natural square root
 * @n: The number
 *
 * Return: -1 and else the square root of n
 */

int _sqrt_recursion(int n)
{
if (n == 0)
return (-1);
return (_sqrt(1, n));
}
