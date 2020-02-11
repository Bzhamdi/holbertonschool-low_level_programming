#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *time_table - prints the 9 times table
 *
 *
 *
 */
void times_table(void)
{
int i, j;
for (i = 0 ; i <= 9 ; ++i)
{
for (j = 0 ; j <= 9 ; ++j)
{
_putchar (j * i);
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
}
}
