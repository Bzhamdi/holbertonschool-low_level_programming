#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **str_concat -  function that concatenates two strings.
 *@s1: param
 *@s2:param
 *
 *Return: string
 */
char *str_concat(char *s1, char *s2)
{
char *ar;
int j, i, a, b;
i = 0;
j = 0;
if (s1 == NULL || s2 == NULL)
return (NULL);
while (s1[i])
i++;
while (s2[j])
j++;
ar = malloc((i + j + 1) * sizeof(char));
if (ar == NULL)
return (NULL);
for (a = 0; a < i; a++)
ar[a] = s1[a];
b = 0;
for (; a < i + j; a++)
{
ar[a] = s2[b];
b++;
}
return (ar);
}
