#include <stdio.h>
void print_before_main(void) __attribute__ ((constructor));

/**
 * print_before_main - function that prints a message before main is executed
 */
void print_before_main(void)
{
    printf("You're beat! and yet, you must allow,\n"
           "I bore my house upon my back!\n");
}
