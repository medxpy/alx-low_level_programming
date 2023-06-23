#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on terminal
 * @n: is the number of times the character \ should be printed
 * Return: Always 0 on success
 */
void	print_diagonal(int n)
{
	int i;
	int space;

	if (n <= 0)
		putchar('\n');
	else
	{
		i = 0;
		while (i < n)
		{
			space = 0;
			while (space < n)
			{
				if (space == i)
					putchar('\\');
				else if (space < i)
					putchar(' ');
				space++;
			}
			putchar('\n');
			i++;
		}
	}
}
