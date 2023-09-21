#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
void before_main_message(void) __attribute__((constructor));
/**
 * before_main_message - prints "You're beat! and yet,
 * you must allow,\nI bore my house upon my back!\n"
 *
 */
void before_main_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
