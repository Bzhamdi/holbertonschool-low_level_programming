#include "holberton.h"
/**
 *_memset - change the adr
 *@s: param
 *@b: param
 *@n:param
 *
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
unsigned int a;
a = n;
i = 0;
for (i = 0; i < a; i++)
s[i] = b;
return (s);
}
