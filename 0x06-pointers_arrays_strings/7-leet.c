#include "holberton.h"
/**
 * *leet - function that encodes a string into 1337.
 *@str: param
 *
 *
 *Return:char
 */
char *leet(char *str)
{
char a[] = "oOlLeEaAtT";
char b[] = "0011334477";
int i, j;
i = 0;
j = 0;
for (i = 0 ; str[i] != '\0'; i++)
for (j = 0; j <= 10; j++)
if (str[i] == a[j])
str[i] = b[j];
return (str);
}
