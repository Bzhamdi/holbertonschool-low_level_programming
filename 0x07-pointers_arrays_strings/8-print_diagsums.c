#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers.
 * @a: param square
 * @size: param size
 *
 */
void print_diagsums(int *a, int size)
{
int i, j, p1, p2, sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
p1 = (i * size) + i;
sum1 += a[p1];
}
for (j = 0; j < size; j++)
{
p2 = (j * size) + (size - 1 - j);
sum2 += a[p2];
}
printf("%d, %d\n", sum1, sum2);
}
