#include<stdio.h>

/**
 * main - Entry point
 * Decription: Print lowercase alphabet in reverse
 * Return: Always 0 on success
 */

int	main(void)
{
	char i;

	i = 122;
	while (i > 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
