#include <stdarg.h>
/**
 *sum_them_all - returns the sum of all its parameters.
 *@n:param size of args
 *Return: sum of its
 *
 */
int sum_them_all(const unsigned int n, ...)
{
va_list l_args;
unsigned int i, sum;
sum = 0;
i = 0;
if (n == 0)
return (0);
va_start(l_args, n);
while (i < n)
{
sum = sum + va_arg(l_args, int);
i++;
}
va_end(l_args);
return (sum);
}
