#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * main - calculate
 * @argc: size of arguments
 * @argv: array of arguments.
 * Return: 0
 */
int main(int argc, char **argv)
{
int a, b;
a = 0;
b = 0;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (get_op_func(argv[2]) == NULL || argv[2][1])
{
printf("Error\n");
exit(99);
}
if ((argv[2][0] == '/' || argv[2][0] == '%') && (argv[3][0] == '0'))
{
printf("Error\n");
exit(100);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
printf("%d\n", get_op_func(argv[2])(a, b));
return (0);
}
