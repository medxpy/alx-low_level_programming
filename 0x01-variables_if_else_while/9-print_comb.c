#include<stdio.h>
/**
 * main - Entry Point
 * Description: Print all possible combination
 * of singl digit.
 * Return: Always 0 on success
 */

int	main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}

