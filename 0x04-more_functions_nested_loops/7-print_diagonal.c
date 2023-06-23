#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on terminal
 * @n: is the number of times the character \ should be printed
 * Return: Always 0 on success
 */

void	print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		i = 1;
		while (i <= n)
		{
			_putchar(92);
			i++;
		}
		_putchar('\n');
	}
}
