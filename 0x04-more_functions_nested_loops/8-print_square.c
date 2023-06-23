#include "main.h"

/**
 * print_square - print a square in terminal
 * @size: size of the square
 * Return: Always 0 on success
 */

void	print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}

