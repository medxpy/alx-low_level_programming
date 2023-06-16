#include<stdio.h>

/**
 * main - Entry point
 * Description: Print alphabet exept q and e
 * Return: Alwyas 0 on success
 */

int	main(void)
{
	char i;

	i = 97;
	while (i <= 122)
	{
		if ((i != 101) && (i != 113))
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}

