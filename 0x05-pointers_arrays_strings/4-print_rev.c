#include "main.h"

/**
 * _strlen - Calculate the length of a string
 * @str: The string to calculate their length
 * Return: The length of the string
 * By Medxpy
 */

int	_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * print_rev - print a string in reverse, followed by anew line
 * @s: The string to print
 * Return: Anything
 * By Medxpy
 */

void	print_rev(char *s)
{
	int slen;

	slen = _strlen(s) - 1;
	while (slen >= 0)
	{
		_putchar(s[slen]);
		slen--;
	}
	_putchar('\n');
}
