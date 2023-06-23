#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: is the number of times the character _ should be printed
 * Return: Always 0 on success
 */

void	print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		i = 1;
		while (i <= n)
		{
			_putchar(95);
			i++;
		}
		_putchar('\n');
	}
}
