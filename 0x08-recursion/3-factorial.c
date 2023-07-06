#include "main.h"

/**
 * factorial - Calculate the factorial of a given number
 * @n: The number to calculate the factorial to
 * Return: -1 if n is lower than 0, 1 if n is 0, otherwise return the factorial
 */

int	factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
