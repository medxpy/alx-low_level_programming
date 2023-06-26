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
	int len;
	char tmp;

	len = _strlen(s) - 1;
	i = 0;
	while (len >= i)
	{
		tmp = s[len];
		s[len] = s[i];
		s[i] = tmp;
		len--;
		i++;
	}
}

