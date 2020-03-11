#include <stdio.h>
/**
 * print_name - function that prints a name
 * @name: name
 * @f: pointer to function.
 *
 */
void print_name(char *name, void (*f)(char *))
{
if ((name != NULL) && (*f != NULL))
(*f)(name);
}
