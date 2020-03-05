#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **string_nconcat -  function that concatenates two strings.
 *@s1: param
 *@s2:param
 *@n : number of char of s2 to concatenate
 *Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ar;
unsigned int j, i, b;
unsigned int a;
i = 0;
j = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i])
i++;
while (s2[j])
j++;
if (n >= j)
n = j;
ar = malloc(n + i + 1);
if (ar == NULL)
return (NULL);
for (a = 0; a < i; a++)
ar[a] = s1[a];
b = 0;
for (; a < i + n; a++)
{
ar[a] = s2[b];
b++;
}
return (ar);
}
