#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *print_most_numbers - prints the numbers but not 2 and 4
 *
 *
 *
 */
void print_most_numbers(void)
{
int c;
for (c = 0; c <= 9; ++c)
{
if (c != 2 && c != 4)
_putchar(c + '0');
}
_putchar('\n');
}
