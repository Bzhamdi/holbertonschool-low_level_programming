#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *print_numbers - prints the numbers
 *
 *
 *
 */
void print_numbers(void)
{
int c;
for (c = 0; c <= 9; ++c)
{
_putchar(c + '0');
}
_putchar('\n');
}
