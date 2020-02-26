#include "holberton.h"
/**
* _strlen_recursion - length
*@s: string
*Return: length of a string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (1 + _strlen_recursion(s));
}

/**
* palindrome - to verify palindrome
*@s: a string
*@len: the length
*Return: the value
*/
int palindrome(char *s, int len)
{
if (len <= 1)
return (1);
else if (*s == *(s + len - 1))
return (palindrome(s + 1, len - 2));
else
return (0);
}

/**
* is_palindrome - verify if is palindrome
*@s: a string
*Return: 1 if palindrome else 0
*/
int is_palindrome(char *s)
{
int len;

len = _strlen_recursion(s);
if (len <= 1)
return (1);
return (palindrome(s, len));
}
