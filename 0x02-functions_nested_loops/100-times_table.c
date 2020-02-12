#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *times_table - prints the_times_table
 *@n: number (param)
 *
 *
 */

void print_times_table(int n)
{
int i, j, c;
if (n < 15 && n > 0)
{
for (i = 0 ; i <= n ; ++i)
{
for (j = 0 ; j <= n ; ++j)
{
c = j * i;
if (c >= 10 && c < 100)
{
_putchar(' ');
_putchar(c / 10 + '0');
_putchar(c % 10 + '0');
}
else if (c >= 100)
{
_putchar(' ');
_putchar(c / 100 + '0');
_putchar(c % 100 / 10 + '0');
_putchar(c % 10 + '0');
}
else
{
if (j != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(c + '0');
}
if (j != n)
_putchar(',');
if (j == n)
{
_putchar('\n');
}
}
}
}
}
