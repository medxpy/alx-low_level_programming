#include "main.h"

/**
 * print_numbers - print the numbers, from 0 to 9 followed
 * by new line
 * Return: Always 0 on success.
 */

void	print_numbers(void)
{
	char i;

	i = 48;
	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

