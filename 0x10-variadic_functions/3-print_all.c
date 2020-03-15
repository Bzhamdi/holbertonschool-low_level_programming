#include <stdarg.h>
#include <stdio.h>
/**
 *print_all -  prints all.
 *@format: types
 *
 *
 */
void print_all(const char * const format, ...)
{
va_list l_args;
unsigned  int i = 0;
char *str;
va_start(l_args, format);
while (format == NULL)
{
printf("\n");
return;
}
while (format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%c", (char) va_arg(l_args, int));
break;
case 'i':
printf("%d", va_arg(l_args, int));
break;
case 'f':
printf("%f", (float) va_arg(l_args, double));
break;
case 's':
str = va_arg(l_args, char *);
if (str == NULL)
{
printf("(nil)");
break;
}
printf("%s", str);
break;
}
if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
|| format[i] == 's') && (format[i + 1] != '\0'))
printf(", ");
i++;
}
va_end(l_args);
printf("\n");
}
