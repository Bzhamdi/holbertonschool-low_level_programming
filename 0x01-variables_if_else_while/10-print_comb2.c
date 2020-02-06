#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c;
for (c = 0; c <= 99; ++c)
{
putchar (c / 10 + '0');
putchar(c % 10 + '0');
if (c != 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
