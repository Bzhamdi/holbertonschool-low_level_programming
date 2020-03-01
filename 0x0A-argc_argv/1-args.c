#include <stdio.h>
/**
 *main -  prints the number of arguments passed into it
 *@argc: param int lenth
 *@argv:param
 *
 *Return: int
 */
int main(int argc, char **argv)
{
if (argv != '\0')
{
printf("%d\n", argc - 1);
}
return (0);
}
