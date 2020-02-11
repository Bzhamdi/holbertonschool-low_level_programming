#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
int _isalpha(int c)
{
int a = c;
 if ((a > 65 && a <= 90) || ( a > 97 && a <= 122 ))
{
return (1);
}
else
{
return (0);
}
}

