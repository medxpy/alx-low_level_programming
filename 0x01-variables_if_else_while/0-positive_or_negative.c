#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Check if the n variable is
 * positive or negative or equal a 0
 * Return: 0 on succes
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive", n);
	if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	return (0);
}
