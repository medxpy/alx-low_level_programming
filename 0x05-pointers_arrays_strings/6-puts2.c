#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @str: the string to calculate length to
 * Return: The length;
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
 * puts2 - print every other character of a string
 * @str: the string to print other character
 * Return: Anything
 */

void	puts2(char *str)
{
	int i;

	i = 0;
	while (i < _strlen(str))
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
