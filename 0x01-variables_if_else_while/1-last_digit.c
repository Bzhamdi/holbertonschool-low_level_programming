#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main
 *
 *
 * Return: 0
 */
int main(void)
{
int n, d;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
d = n % 10;
if (d > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, d);
else if (d < 6 && d != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);
else
printf("Last digit of %d is %d and is 0\n", n, d);
return (0);
}
