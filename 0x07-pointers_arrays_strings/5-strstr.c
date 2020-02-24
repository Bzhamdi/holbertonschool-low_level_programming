#include "holberton.h"
/**
 *_strstr - function that locates a substring.
 *@hystack: param
 *@needle:param
 *Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
j = 0;
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[j])
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + 1] == needle[j + 1])
{
continue;
}
return (haystack + i);
}
}
}
return (0);
}
