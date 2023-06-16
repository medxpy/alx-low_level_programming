#include<stdio.h>

/**
 * main - Entry Point
 * Description: Print alphabet in lowercase then in uppercase
 * Return: Always 0 on success
 */

int	main(void)
{
	char i;
	char b;

	i = 97;
	b = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (b <= 90)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
