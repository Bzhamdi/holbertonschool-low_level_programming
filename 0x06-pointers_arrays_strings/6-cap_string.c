#include "holberton.h"
/**
 * *cap_string -  capitalizes all words of a string
 *@str: param
 *
 *
 *Return:char
 */
char *cap_string(char *str)
{
int i;
i = 1;
if (str[0] >= 'a' && str[0] <= 'z')
str[0] = str[0] - 32;
for (i = 1; str[i] != '\0'; i++)
{
if ((str[i] == ',' || str[i] == ' ' || str[i] == ';'
|| str[i] == '.' || str[i] == '!'
|| str[i] == '?' || str[i] == '"' ||
str[i] == '\n' || str[i] == '('
|| str[i] == ')' || str[i] == '{' || str[i] == '}' || str[i] == '\t') &&
(str[i + 1] >= 'a' && str[i + 1] <= 'z'))
str[i + 1] = str[i + 1] - 32;
}
return (str);
}
