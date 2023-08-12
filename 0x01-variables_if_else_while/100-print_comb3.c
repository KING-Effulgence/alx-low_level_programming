#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always(success)
 */

int main(void)
{
	int digit1 = 0;
	int digit2;

	while (digit1 <= 8)
	{
	digit2 = digit1 + 1;
	while (digit2 <= 9)
	{
	putchar(digit1 + '0');
	putchar(digit2 + '0');
	if (digit1 != 8)
	{
	putchar(',');
	putchar(' ');
	}
	digit2++;
	}
	digit1++;
	}
	putchar('\n');
	return (0);
}
