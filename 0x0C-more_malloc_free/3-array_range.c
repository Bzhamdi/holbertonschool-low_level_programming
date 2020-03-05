#include "holberton.h"
#include <stdlib.h>
/**
 **array_range - function that creates an array of integers.
 *@min: param
 *@max:param
 *
 *Return: string
 */
int *array_range(int min, int max)
{
int *ar;
int i;
if (min > max)
return (NULL);
ar = malloc((max - min + 1) * sizeof(int));
if (ar == NULL)
return (NULL);
for (i = min; i <= max; i++)
ar[i] = i;
return (ar);
}
