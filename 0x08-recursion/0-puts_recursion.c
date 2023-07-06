#include "main.h"

/**
 * _puts_recursion -  Prints a string followed by a new line
 * @s: The string to print
 * Return: Nothing
 */

void	_puts_recursion(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}

