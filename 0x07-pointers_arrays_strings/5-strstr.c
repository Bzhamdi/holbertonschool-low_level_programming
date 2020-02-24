#include "holberton.h"
/**
 *_strstr - function that locates a substring.
 *@haystack: param
 *@needle:param
 *
 *Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *a = haystack;
char *b = needle;

while (*b == *haystack && *b != '\0'
&& *haystack != '\0')
{
haystack++;
b++;
}
if (!*b)
return (a);
haystack = a + 1;
}
return (0);
}
