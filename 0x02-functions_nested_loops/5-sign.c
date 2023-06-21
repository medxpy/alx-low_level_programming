#include "main.h"
/**
 * print_sign - Print the sign of a number
 * @n: the number to check it's sign
 * Return: Always 0 on success
 */

int	print_sign(int n)
{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		else if (n == 0)
		{
			_putchar(48);
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	return (0);
}
