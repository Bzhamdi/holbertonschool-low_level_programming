#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *times_table - prints the_times_table
 *
 *
 *
 */
void times_table(void)
{
int i, j, c;
for (i = 0 ; i <= 9 ; ++i)
{
for (j = 0 ; j <= 9 ; ++j)
{
c = j * i;
if (c >= 10)
{
_putchar(' ');
_putchar(c / 10 + '0');
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
if (j != 9)
_putchar(',');
if (j == 9)
{
_putchar('\n');
}
}
}
}
