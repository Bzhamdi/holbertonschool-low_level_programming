#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _isalpha - check char is alpha
 * @c: number recieved (param)
 *
 *Return: 1 if is alpha 0 else
 */
int _isalpha(int c)
{
int a = c;
if ((a > 65 && a <= 90) || (a > 97 && a <= 122))
{
return (1);
}
else
{
return (0);
}
}

