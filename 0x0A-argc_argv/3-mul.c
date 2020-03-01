#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that multiplies two numbers.
 *@argc: param int lenth
 *@argv:param
 *
 *Return: int
 */
int main(int argc, char **argv)
{
int a, b, c;
if (argc != 3)
printf("Error\n");
else
if (argc != 0)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
c = a *b;
printf("%d\n", c);
}
return (0);
}
