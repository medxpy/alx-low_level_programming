#include <stdio.h>
/**
 * main - entry point
 * Description: program to print numbers from 1 to 100
 * But for multiples of three print Fizz instead of the
 * number and for the multiples of five print Buzz.
 * For numbers which are multiples of both
 * three and five print FizzBuzz.
 * Return: Always 0 on success
 */

int	main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
			printf("Fizz");
		else if ((i % 5 == 0) && (i % 3 != 0))
			printf("Buzz");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		else
			printf("\n");
		i++;
	}
	return (0);
}
