#include "main.h"
/**
 * sqrt_root - Calculate the square root of a given n
 * @n: number is squared and compared to base
 * @base: number to check
 * Return: natural squar root of the base
 */

int	sqrt_root(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (sqrt_root(n + 1, base));
}


/**
 * _sqrt_recursion - Calculate the natural square root of a number
 * @n: the number to calculate is square root
 * Return: if n does not have a natural square root
 * return -1, otherwise return th value.
 */

int	_sqrt_recursion(int n);
{
	return (sqrt_root(1, n));
}

