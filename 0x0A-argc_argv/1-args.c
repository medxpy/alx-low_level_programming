#include "main.h"
#include <stdio.h>

/**
 * main - print the umber of arrg passed
 * @argc: number of arrgs
 * @argv: array of arrgs
 * Return: always 0
 */

int	main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

