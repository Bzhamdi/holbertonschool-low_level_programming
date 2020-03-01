#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the minimum number of coins.
 *@argc: param int lenth
 *@argv:param
 *
 *Return: int
 */
int main(int argc, char *argv[])
{
int a, b = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
if (a < 0)
{
printf("%d\n", b);
return (0);
}
else
{
b = b + a / 25;
a = a % 25;
b = b + a / 10;
a = a % 10;
b += a / 5;
a = a % 5;
b = b + a / 2;
a = a % 2;
b = b + a;
printf("%d\n", b);
}
return (0);
}
