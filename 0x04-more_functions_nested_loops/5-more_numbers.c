#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *more_numbers - prints the numbers 10 times
 *
 *
 *
 */
void more_numbers(void)
{
int c, a;
for (a = 0; a <= 9; ++a)
{
for (c = 0; c <= 14; ++c)
{
if (c > 9)
{
_putchar(c / 10 +'0');
_putchar( c % 10 + '0');
}
else
_putchar(c + '0');
}
_putchar('\n');
}
}
