#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **_strdup - returns a pointer to a newly allocated.
 *@str: param
 *
 *
 *Return: string
 */
char *_strdup(char *str)
{
char *ar;
int j, i = 0;
if (str == NULL)
return (NULL);
while (str[i])
i++;
ar = malloc(i + 1);
if (ar == NULL)
return (NULL);
for (j = 0; j < i; j++)
ar[j] = str[j];
return (ar);
}
