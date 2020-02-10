#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
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
_putchar(chaine[i]);
i++;
}
_putchar('\n');
return (0);
}
