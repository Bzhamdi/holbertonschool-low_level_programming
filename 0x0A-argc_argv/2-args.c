B#include <stdio.h>
/**
 *main -  prints all arguments it receives.
 *@argc: param int lenth
 *@argv:param
 *
 *Return: int
 */
int main(int argc, char **argv)
{
while (argc != 0)
{
printf("%s\n", *argv++);
argc--;
}
return (0);
}
