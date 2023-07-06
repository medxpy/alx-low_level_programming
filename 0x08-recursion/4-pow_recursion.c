#include "main.h"

/**
 * _pow_recursion - Calculate the value of x raised to the
 * power of y
 * @x: the base number
 * @y: the exponent
 * Return: The value of x raised by y, if y is lower than 0, return -1
 */

int	_pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 1 || y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
