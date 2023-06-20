#include "main.h"
/**
 * print_alphabet - function to print all the alphabets
 * Return: Always 0 on success
 */
void	print_alphabet(void)
{
	char a;

	a = 97;
	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
