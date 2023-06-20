#include "main.h"
/**
 * print_alphabet_x10 - function to print all the alphabets
 * Return: Always 0 on success
 */
void	print_alphabet_x10(void)
{
	int i;
	char a = 97;

	i = 0;
	while (i < 10)
	{
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		a = 97;
		i++;
	}

}

