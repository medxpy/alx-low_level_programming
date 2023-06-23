#include "main.h"

/**
 * print_triangle - print a triangld followed by new line
 * @size: is the size of the triangle
 */

void	print_triangle(int size)
{
	int i;
	int j;

	i = 0;
	if (size <= 0)
		_putchar('\n');
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (j < size - i - 1)
				_putchar(' ');
			else
				_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
