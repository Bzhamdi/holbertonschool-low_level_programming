#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * print_last_digit - check the number inserted
 * @n: number recieved (param)
 *
 *Return: last digit
 */
int print_last_digit(int n)
{
int a;
a = n % 10;
if (a < 0)
{
a = -a ;
}
_putchar (a + '0');
return (a);
}
