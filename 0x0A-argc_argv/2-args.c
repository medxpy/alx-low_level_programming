#include "main.h"
#include <stdio.h>
/**
 * main - print all arguments
 * @argc: number of args
 * @argv: array of args
 * Return: always 0
 */

int	main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (argc > i)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
