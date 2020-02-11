#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
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
