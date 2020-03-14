#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers -  prints numbers.
 *@n:param size of args
 *@separator: char
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list l_args;
unsigned int i = 0;
va_start(l_args, n);
while (i < n)
{
printf("%d", va_arg(l_args, int));
if (separator != NULL)
printf("%s", separator);
i++;
}
va_end(l_args);
printf("\n");
}
