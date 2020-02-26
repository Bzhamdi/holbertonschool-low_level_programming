#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: param string
 *
 *
 *Return:a int
 */
int _strlen_recursion(char *s)
{
int a;
if (*s == '\0')
return (0);
else
a = 1 + _strlen_recursion(++s);
return (a);
}
