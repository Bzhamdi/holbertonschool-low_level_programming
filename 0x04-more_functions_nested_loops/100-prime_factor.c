#include <stdio.h>
#include <math.h>
/**
 * main - prime factor of 612852475143.
 *
 * Return: 0
 */
int main(void)
{
long n = 612852475143;
long i;
for (i = 3; i <= sqrt(n); i++)
while (n % i == 0)
{
n = n / i;
}
printf("%li\n", n);
return (0);
}
