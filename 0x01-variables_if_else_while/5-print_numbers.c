#include<stdio.h>

/**
 * main - Entry point
 * Description: Print all single digit numbers strating from 0
 * Return: always 0 on success
 */

int	main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	return (0);
}
