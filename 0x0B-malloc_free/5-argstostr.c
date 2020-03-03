#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
**argstostr - concatenates all the arguments of your program.
*@ac: param
*@av:param
*
*Return: char
*/
char *argstostr(int ac, char **av)
{
int i, j, b, a, c;
char *str;
a = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
b++;
b++;
}
b++;
str = malloc(b *sizeof(char));
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (c = 0; av[i][c]; c++)
{
str[a] = av[i][c];
a++;
}
str[a] = '\n';
a++;
}
str[a] = '\0';
return (str);
}
