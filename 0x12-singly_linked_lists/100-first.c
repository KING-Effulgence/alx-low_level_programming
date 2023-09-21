#include <stdio.h>

void story_time(void)__attribute__((constructor));

/**
 * story_time - prints a sentence before the main function
 * is excecuted
 */
void story_time(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
