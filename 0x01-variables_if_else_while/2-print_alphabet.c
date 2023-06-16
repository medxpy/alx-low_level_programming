#include<stdio.h>

/**
 * main - Entry point
 * Description: Print alphabet in lowercase
 * Return: Always 0 on success
 */

int	main(void)
{
	char i;

	i = 97;
	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}

