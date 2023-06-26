#include "main.h"

/**
 * _strlen - Calculate the length of a string
 * @str: The string to calculate length to
 * Return: The length of the string
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
 * puts_half - Print half of a string
 * @str: The string to print half from
 * Return: Anything
 */

void	puts_half(char *str)
{
	int i;
	int n;

	if (_strlen(str) % 2 == 0)
	{
		i = _strlen(str) / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		n = (_strlen(str) - 1) / 2;
		while (n < _strlen(str) - 1)
		{
			_putchar(str[n + 1]);
			n++;
		}
	}
	_putchar('\n');
}

