#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _islower - print last digit lower
 * @c: number recieved (param)
 *
 *Return: 0 if is lower else return 1
 */
int _islower(int c)
{
int a = c;
if (a >= 96 && a <= 123)
{
return (1);
}
else
{
return (0);
}
}
