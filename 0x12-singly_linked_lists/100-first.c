#include <stdio.h>
/**
 * before_main - before the main function is executed.
 *
 */
void __attribute__ ((constructor)) before_main()
{
printf("You're beat! and yet, you must allow");
printf(",\nI bore my house upon my back!\n");
}
