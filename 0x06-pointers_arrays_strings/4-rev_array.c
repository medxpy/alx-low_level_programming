#include "main.h"

/**
 * reverse_array - reverse an array of int
 * @a: the array to be reversed
 * @n: number if elements in the array
 * Return : nothing
 */

void	reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	j = n - 1;
	i = 0;
	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
		i++;
	}
}
