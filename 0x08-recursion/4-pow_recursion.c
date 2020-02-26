#include "holberton.h"
/**
 * _pow_recursion -  value of x raised to the power of y
 * @x: param
 * @y: param
 *Return: a
 *
 */
int _pow_recursion(int x, int y)
{
int a;
if (y < 0)
return (-1);
if (y == 0)
return (1);
a = x *  _pow_recursion(x, y - 1);
return (a);
}
