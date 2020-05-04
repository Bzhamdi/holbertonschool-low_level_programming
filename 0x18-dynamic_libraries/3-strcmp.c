#include "holberton.h"
/**
 * *_strcmp - compares two strings
 *@s1: param
 *@s2: param
 *
 *Return: 0 if the same else the difference between 2 char
 */
int _strcmp(char *s1, char *s2)
{
int i, a;
i = 0;
a = 0;
while (s1[i] != '\0' || s2[i] != '\0')
{
if (s1[i] == s2[i])
{
i++;
continue;
}
if (s1[i] > s2[i])
return (s1[i] - s2[i]);
if (s1[i] < s2[i])
return (s1[i] - s2[i]);
}
return (a);
}
