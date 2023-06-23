#include "main.h"

/**
 * more_numbers - print 10 times the numbers, from
 * 0 to 14, followed by a new line
 * Rerurn: Always 0 on success
 */

void	more_numbers(void)
{
	int number;
	int i;

	number = 0;
	i = 0;
	while (i < 10)
	{
		while (number <= 14)
		{
			if (number >= 10)
				_putchar('0' + number / 10);
			_putchar('0' + number % 10);
			number++;
		}
		if (i != 9)
			_putchar('\n');
		i++;
		number = 0;
	}
}
