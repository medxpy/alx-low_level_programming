#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the last digit of a number
 * stored in n variable
 * Return: Alwayd 0 on success
 **/

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;
	if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n"
				, n, lastDigit);
	if (lastDigit == 0)
		printf("Last digit of %d is %d and is 0\n"
				, n, lastDigit);
	if (lastDigit < 6 && lastDigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n"
				, n, lastDigit);

	return (0);
}
