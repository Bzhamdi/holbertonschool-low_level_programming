#include <stdlib.h>
#include <stdio.h>

/**
 * main - main
 *
 *
 * Return: 0
 */
int main(void)
{
char chaine[] = "Holberton";
int i = 0;
while (chaine[i] != '\0')
{
putchar(chaine[i]);
i++;
}
putchar('\n');
return (0);
}
