#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, a, b, c, d;
for (i = 1; i <= 9899; ++i)
{
d = i % 10;
c = i % 100 / 10;
b = i % 1000 / 100;
a = i / 1000;
putchar(d + '0');
putchar(c + '0');
putchar(' ');
putchar(b + '0');
putchar(a + '0');
if (c != 9 || a != 9 || b != 8 || d != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
