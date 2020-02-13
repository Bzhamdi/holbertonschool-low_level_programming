#include "holberton.h"
/**
 *print_triangle - prints triangel
 *@size: param
 *
 *
 */
void print_triangle(int size)
{
int j, i;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if (j <= size - i)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
