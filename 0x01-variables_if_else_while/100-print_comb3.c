#include<stdio.h>
/**
 * main - Entry point
 * Description: Prints all possible differents combinations
 * of two digits.
 * Return: Always 0 on success
 * By Medxpy on 17/jun/2023 21:33
 */

int	main(void)
{
	int i;
	int j;

	i = 0;

	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i != 8)
			{	
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
