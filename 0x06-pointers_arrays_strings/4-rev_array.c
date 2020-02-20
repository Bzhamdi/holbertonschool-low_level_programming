#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers.
 *@a: param
 *@n: param
 *@n: lenth
 *
 */
void reverse_array(int *a, int n)
{
int i, mv, j;
i = 0;
j = n;
mv = 0;
j--;
while (i < j)
{
mv = a[i];
a[i] = a[j];
a[j] = mv;
i++;
j--;
}
}
