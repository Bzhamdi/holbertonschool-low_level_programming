#include "holberton.h"
#include <stdlib.h>
/**
 **_calloc -   allocates memory for an array.
 *@nmemb: param
 *@size:param
 *
 *Return: string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ar;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
ar = malloc(nmemb * size);
if (ar == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
ar[i] = '\0';
return (ar);
}
