#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * print_sign - check the number inserted
 * @n: number recieved (param)
 *
 *Return: 1 greater than zero  0 is zero -1 less than zero
 */
int print_sign(int n)
{
int a = n;
if (a > 0)
{
_putchar('+');
return (1);
}
if (a == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
