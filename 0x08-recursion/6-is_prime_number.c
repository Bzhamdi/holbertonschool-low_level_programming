#include "holberton.h"
/**
 * _prime - increments count
 * @a: The number to divide
 * @b: The number to check
 *
 * Return: 1 if is prime else 0
 */
int prime(int a, int b)
{
if (b < 0)
return (0);
if (a == b)
return (1);
if (b % a == 0)
return (0);
else
return (_prime(++a, b));
}

/**
 * is_prime_number - checks if a number is prime or no
 * @n: The number to check
 *
 * Return: 1 if prime and 0 otherwise
 */

int is_prime_number(int n)
{
if (n == 1)
return (0);
return (_prime(2, n));
}
