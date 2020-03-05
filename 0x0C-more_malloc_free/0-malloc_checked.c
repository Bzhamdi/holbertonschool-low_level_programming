#include <stdlib.h>
#include "holberton.h"
/**
 **malloc_checked - allocates memory using malloc
 *@b: param size allocated.
 *
 *Return: pointer of memory.
 */
void *malloc_checked(unsigned int b)
{
void *memory;
memory = malloc(b);
if (memory == NULL)
exit(98);
return (memory);
}
