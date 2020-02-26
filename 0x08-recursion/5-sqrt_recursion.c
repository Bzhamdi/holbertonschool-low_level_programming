#include <stdio.h>
#include "holberton.h"
/**
 * sqrt - Tests a
 * @a: The number to compare with b
 * @b: The squared number to find the square root of
 *
 * Return: -1 and a otherwise
 */
int sqrt(int a, int b)
{
if (a > b)
return (-1);
if ((a * a) == b)
return (a);
else
return (sqrt(++a, b));
}
/**
 * _sqrt_recursion - natural square
 * @n: number
 *
 * Return: -1 else the square root of n
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (-1);
return (sqrt(1, n));
}
