#include "holberton.h"
/**
 * *rot13 - encodes a string using rot13
 *@str: param
 *
 *
 *Return:char
 */
char *rot13(char *str)
{
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;
i = 0;
j = 0;
for (i = 0 ; str[i] != '\0'; i++)
for (j = 0; j <= 47; j++)
if (str[i] == a[j])
{
str[i] = b[j];
break; }
return (str);
}
