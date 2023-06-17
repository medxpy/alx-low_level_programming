#include<stdio.h>
/**
 * main - Entry Point
 * Description: Print numbers using only putchar() function.
 * Return: Always 0 on success;
 */

int	main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

