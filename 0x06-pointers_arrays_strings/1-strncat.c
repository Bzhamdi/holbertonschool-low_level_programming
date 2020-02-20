#include "holberton.h"
/**
 * *_strncat - strncat
 *@dest: param
 *@src: param
 *@n: lenth
 *Return:cpy
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
j = 0;
while (dest[i] != '\0')
{
i++;
}
j = i;
i = 0;
while (src[i] != '\0' && i < n)
{
dest[j] = src[i];
i++;
j++;
}
dest[j] = '\0';
return (dest);
}
