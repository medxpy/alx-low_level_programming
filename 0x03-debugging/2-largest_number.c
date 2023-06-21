#include "main.h"

/**
 * largest_number - returns the largest number of 3 numbers
 * @a: First number
 * @b: Second number
 * @c: Third number
 * Return: Largest number
 */

int	largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
		largest = a;
	else if (b > a && b > c)
		largest = b;
	else
		largest = c;
	return (largest);
}
