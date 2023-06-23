#include "main.h"

/**
 * print_number - print an integer
 * @n: is the integer to print
 */

void	print_number(int n)
{
	unsigned number = n;

	if (n < 0)
	{
		number = -n
		_putchar('-');
	}
	else if (number > 9)
	{
		print_number(number / 10);
		print_number(number % 10);
	}
	else
		_putchar(number + '0');
}

