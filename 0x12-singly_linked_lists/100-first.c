#include <stdio.h>

/**
 * pre_main_message - Function to print a message before main.
 * It will be executed before the main function.
 */
void pre_main_message(void) __attribute__((constructor));

void pre_main_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
