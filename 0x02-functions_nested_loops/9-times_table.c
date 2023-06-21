#include "main.h"
/**
 * times_table(void) - print the 9 times tables, starting with 0
 * Return: Always 0 on success.
 */

void	times_table(void)
{
	int i;
	int t;
	int j;

	i = 0;
	while (i <= 9)
	{
		_putchar('0');
		t = 1;
		while (t <= 9)
		{
			_putchar(',');
			_putchar(' ');
			j = i * t;
			if (j <= 9)
				_putchar(' ');
			else
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			t++;
		}
		i++;
		_putchar('\n');
	}
}



