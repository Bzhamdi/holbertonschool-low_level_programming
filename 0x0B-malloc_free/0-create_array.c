#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **create_array - unction that creates an array of chars.
 *@size: param
 *@c:param char
 *
 *Return: array
 */
char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i;
if (size == 0)
return (0);
ar = malloc(size * sizeof(char));
if (ar == 0)
return ("null");
for (i = 0; i < size; i++)
{
ar[i] = c;
}
return (ar);
}
