#include<stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int A  = 0;

	while (A <= 9)
	{
	putchar(A + '0');
	if (A <= '9')
	{
	if (A != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	A++;
	}
	putchar('\n');
	return (0);
}
