#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function.
 * @argc: int size of argument
 * @argv: arguments
 * Return: int
 *
 */
int main(int argc, char **argv)
{
if (argc != 2)
{
puts("Error");
exit(1);
}
else if (argv[1][0] == '-')
{
puts("Error");
exit(2);
}
return (0);
}
