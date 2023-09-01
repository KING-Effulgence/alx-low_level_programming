#include <stdio.h>
#include "main.h"

/**
 * main - prints number of the arguments passed to the program
 * @argc: numbers of the arguments
 * @argv: array of the arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
