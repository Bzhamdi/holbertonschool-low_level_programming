#include "holberton.h"
/**
 * puts2 - Prints a strig
 * @str: param
 */
void puts2(char *str)
{
  int i, j, a;
a = 0;
for (i = 0; str[i] != '\0'; i++)
a = a + 1;
a--;
for (j = 0; j <= a; j = j + 2)
_putchar (str[j]);
_putchar ('\n');
}
