#include "holberton.h"
/**
 *rev_string - prints
 *@s: param
 *
 *
 */
void rev_string(char *s)
{
char mv;
int j, i, a;
a = 0;
for (i = 0; s[i] != '\0'; i++)
a = a + 1;
a = a - 1;
for (j = 0; j < a; j++)
{
mv = *(s + a);
*(s + a) = *(s + j);
*(s + j) = mv;
a--;
}
}
