#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c;
for (c = 0; c <= 8; ++c)
{
putchar(c % 10 + '0');
putchar(',');
}
putchar('9');
putchar('\n');
return (0);
}
