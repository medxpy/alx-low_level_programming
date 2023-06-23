#include "main.h"

/**
 * print_number - print an integer
 * @n: is the integer to print
 */

void	print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_number(-n)
	}
	else if (n > 9)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
	else
		_putchar(n + '0');
}

