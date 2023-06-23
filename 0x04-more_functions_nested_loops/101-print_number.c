#include "main.h"

/**
 * print_number - print an integer
 * @n: is the integer to print
 */

void	print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}
	if (number > 9)
	{
		print_number(number / 10);
	}
	_putchar(number % 10 + '0');
}

