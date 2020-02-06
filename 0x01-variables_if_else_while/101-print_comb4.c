#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c, a, b;
for (c = 0; c <= 9; ++c)
{
for (a = c + 1; a <= 9; ++a)
{
for (b = a + 1; b <= 9; ++b)
{
putchar(c + '0');
putchar(a + '0');
putchar(b + '0');
if (c != 7 || a != 8 || b != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
