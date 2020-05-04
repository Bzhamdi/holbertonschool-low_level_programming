#include "holberton.h"
/**
 * *_strncpy - function that copies a string
 *@dest: param
 *@src: param
 *@n: lenth
 *Return:cpy
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
for (; i < n ; i++)
dest[i] = '\0';
return (dest);
}
