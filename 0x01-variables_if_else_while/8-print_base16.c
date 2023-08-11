#include<stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = '0';
	char A = 'a';

	while (n <= '9')
	{
	putchar(n);
	n++;
	}
	while (A <= 'f')
	{
	putchar(A);
	A++;
	}
	putchar('\n');
	return (0);
}
