#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * isvalid_int - validat if the string is an integer or not
 * @s: string
 * Return: 1 if s is an int, o otherwise
 */

int	isvalid_int(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */

int	main(int argc, char *argv[])
{
	int total;
	int i;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	i = 1;
	total = 0;
	while (argc > i)
	{
		if (isvalid_int(argv[i]))
			total += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", total);
	return (0);
}

