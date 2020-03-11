#include <stdio.h>
/**
 * array_iterator - executes a function size times.
 * @array: array
 * @size: size of array.
 * @action:pointer of function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (array == NULL || action == NULL)
return;
for (; i < size; i++)
action(array[i]);
}
