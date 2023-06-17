#include<stdio.h>
/**
 * main - Entry point
 * Description: Print all the numbers of base 16 in lowercase
 * Return: Always 0 in success
 */

int	main(void)
{
	int i;
	char hex;

	i = 0;
	hex = 97;
	while (i < 16)
	{
		if (i < 10)
			putchar('0' + i);
		else
		{
			putchar(hex);
			hex++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
