#include "holberton.h"
/**
 *_strchr - locates a character in a string
 *@s: param
 *@c:param
 *Return: s
 */
char *_strchr(char *s, char c)
{
int i, j;
j = 0;
i = 0;
for (i = 0; s[i] != '\0'; i++)
{
s++;
if (s[i] == c)
{
j = 1;
return (s);
}

}
if (j == 1)
return (0);
return (s);
}
