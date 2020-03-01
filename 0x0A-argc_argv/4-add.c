#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 *main - program that adds positive numbers.
 *@argc: param int lenth
 *@argv:param
 *
 *Return: int
 */
int main(int argc, char *argv[])
{
int i, c = 0;
unsigned int j;
for (i = 1; i < argc; i++)
{
for (j = 0; j < strlen(argv[i]); j++)
{
if (isdigit(argv[i][j]) == 0)
{
printf("Error\n");
return (1);
}
}
c = c + atoi(argv[i]);
}
printf("%d\n", c);
return (0);
}
