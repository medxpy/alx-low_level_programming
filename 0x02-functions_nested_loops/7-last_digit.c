#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: the number to print it's last digit
 * Return: Always 0 on success
 */

int	print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit *= -1;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
