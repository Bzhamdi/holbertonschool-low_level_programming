#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - print number to 98
 * @n: number recieved (param)
 *
 *
 */
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i <= 98; ++i)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
printf("\n");
}
if (n == 98)
{
printf("%d\n", n);
}
else
{
for (i = n; i >= 98; --i)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
printf("\n");
}
}
