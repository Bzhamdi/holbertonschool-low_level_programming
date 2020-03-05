#include "holberton.h"
#include <stdlib.h>
/**
 **_realloc - that reallocates a memory block.
 *@ptr: param
 *@old_size: param size
 *@new_size: param size
 *Return: string
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size > old_size)
{
free(ptr);
ptr = malloc(new_size);
return (ptr);
}
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
ptr = malloc(new_size);
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
return (ptr);
}
