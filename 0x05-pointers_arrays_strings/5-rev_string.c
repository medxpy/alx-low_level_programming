#include "main.h"

/**
 * _strlen - calculate the length of string
 * @s: the string to calculate length to
 * Return: the length
 */

int	_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


/**
 * rev_string - reverse a string
 * @s: The string to reverse
 * Return: Anything
 * By Medxpy
 */

void	rev_string(char *s)
{
	int i;

	i = _strlen(s) - 1;
	while (s <= _strlen(s))
	{
		_putchar(s[i]);
		i--;
	}
}

