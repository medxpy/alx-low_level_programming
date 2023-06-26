#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: the first int
 * @b: the second int
 * Return: Nothing
 * By Medxpy
 */

void	swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
