#include "main.h"

/**
 * _puts - print a string, followed by new line to stdout
 * @str: the string to print out
 * Return: Nothing
 * By Medxpy
 */

void	_puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
