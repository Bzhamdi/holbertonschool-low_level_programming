#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings -  prints strings.
 *@n:param size of args
 *@separator: char
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list l_args;
unsigned int i = 0;
char *str;
va_start(l_args, n);
for (i = 0; i < n; i++)
{
str = va_arg(l_args, char*);
if (str == NULL)
{
printf("(nil)");
}
else
printf("%s", str);
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
va_end(l_args);
printf("\n");
}

