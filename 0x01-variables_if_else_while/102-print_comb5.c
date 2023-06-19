#include<stdio.h>

/**
 * main - Entry point
 * Description: Print all possible combinations of two
 * two-digit numbers
 * Return: Always 0 on success
 * By Medxpy
 */

int	main(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (j >= i)
			{
				putchar('0' + (i / 10));
				putchar('0' + (i % 10));
				putchar(' ');
				putchar('0' + (j / 10));
				putchar('0' + (j % 10));
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = 0;
		i++;
	}
	putchar('\n');
	return (0);
}
