#include "main.h"

/**
 * print_most_numbers - print the numbers, from 0 to 9
 * and don't print 2 and 4
 * Return: Always 0 on success
 */

void	print_most_numbers(void)
{
	char i;

	i = 48;
	while ((i >= 48 && i <= 57))
	{
		if ((i != 50 && i != 52))
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
