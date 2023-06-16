#include<stdio.h>
/**
 * main - Entry point
 *
 *Description: C program that prints the size of various
 * types on the computer it is compiled and run on.
 *
 * Return: Always 0 (Success)
 */

int	main(void)
{
	char string;
	int num;
	long int n1;
	long long int n2;
	float n3;

	printf("Size of a char: %d byte(s)\n", sizeof(string));
	printf("Size of a int: %d byte(s)\n", sizeof(num));
	printf("Size of a long int: %d byte(s)\n", sizeof(n1));
	printf("Size of a long long int: %d byte(s)\n", sizeof(n2));
	printf("Size of a float: %d byte(s)\n", sizeof(n3));
	return (0);
}
