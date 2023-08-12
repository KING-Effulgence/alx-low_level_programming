#include<stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char A  = '0';

	while (A <= '9')
	{
	putchar(A);
	if (A <= '8')
	{
	putchar(',');
	putchar(' ');
	}
	A++;
	}
	putchar('\n');
	return (0);
}
