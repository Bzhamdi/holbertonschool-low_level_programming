#include "holberton.h"
/**
 * puts_half - Prints half of string
 * @str: param
 */
void puts_half(char *str)
{
int i, j, a, b;
a = 0;
for (i = 0; str[i] != '\0'; i++)
a = a + 1;
b = a;
if (a % 2 != 0)
{
a = (a - 1) / 2;
}
else
a = a / 2; 
for (j = a; j <= b ; j++)
_putchar (*(str + j));
_putchar ('\n');
}
