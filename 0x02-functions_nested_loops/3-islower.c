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
if (a > 65 && a <= 90)
{
return (0);
}
else
{
return (1);
}
}
