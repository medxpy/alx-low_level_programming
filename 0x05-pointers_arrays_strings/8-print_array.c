#include <stdio.h>
#include "main.h"

/**
 * print_array - print n elements of an array of integers
 * @a: The Array
 * @n: The number of elements of the array to be printed
 * Return: Anything
 */

void	print_array(int *a, int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		printf("%d", a[i]);
		i++;
	}

	while (i < n)
	{
		printf(", %d", a[i]);
		i++;
	}
	printf("\n");
}

