#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, a, b, c, d;
for (i = 0; i <= 99; i++)
{
for (j = i + 1; j <= 99; j++)
{
a = i / 10;
b = i % 10;
c = j / 10;
d = j % 10;
putchar(a + '0');
putchar(b + '0');
putchar(' ');
putchar(c + '0');
putchar(d + '0');
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
