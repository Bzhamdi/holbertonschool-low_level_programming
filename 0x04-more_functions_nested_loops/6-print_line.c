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
while (c < n)
{
_putchar ('_');
c++;
}
_putchar ('\n');
}
