#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *print_line - prints
 *@n: param
 *
 *
 */
void print_line(int n)
{
int c;
if (n > 0)
for (c = 0; c <= n; ++c)
{
_putchar('_');
}
_putchar('\n');
}
