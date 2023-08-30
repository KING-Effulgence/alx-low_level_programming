#include "main.h"

/**
 * sqrt_a - returns the natural square root of a number
 * @a: number to calculate the square root of
 * @b: iteration
 *
 * Return: the square root -1
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - recurses to find the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
