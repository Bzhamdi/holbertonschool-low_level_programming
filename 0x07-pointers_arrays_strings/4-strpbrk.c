#include "holberton.h"
/**
 *_strpbrk - searches a string for any of a set of bytes.
 *@s: param
 *@accept:param
 *Return: s
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
j = 0;
i = 0;
for (i = 0; s[i] != '\0'; i++)
{

for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return (0);
}
