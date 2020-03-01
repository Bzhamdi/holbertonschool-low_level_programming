#include <stdio.h>
/**
 *main -  prints its name, followed by a new line.
 *@argc: param int lenth
 *@argv:param
 *
 *Return: int
 */
int main(int argc, char **argv)
{
while (argc != '\0')
{
printf("%s\n", argv[0]);
argc--;
}
return (0);
}
