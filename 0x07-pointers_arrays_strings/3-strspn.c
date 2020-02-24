#include "holberton.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: param
 *@accept: param
 *Return: lenth
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int max;
unsigned int i, j;
for (i = 0; accept[i] != '\0'; i++)
{
for (j = 0; s[j] != '\0' ; j++)
{
if (accept[i] == s[j])
{
if (j > max)
max = j;
break;
}
}
}
max++;
return (max);
}
