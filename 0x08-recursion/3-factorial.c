#include "holberton.h"
/**
 * factorial -  the factorial of a given number
 * @n: param string
 *
 *
 *
 */
int factorial(int n)
{
int a;
if (n < 0)
return (-1);
if (n == 0)
return (1);
a = n * factorial(n - 1);
return (a);
}
