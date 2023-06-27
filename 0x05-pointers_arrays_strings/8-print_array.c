#include <stdio.h>
#include "main.h"

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

