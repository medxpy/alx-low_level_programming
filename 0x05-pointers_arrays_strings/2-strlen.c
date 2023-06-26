#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: The string to calculate their length
 * Return: The lentgh of the given string
 * By Medxpy
 */

int	_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

