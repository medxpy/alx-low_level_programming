#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a given string
 * @s: The string to calculate length to
 * Return: The length of the string
 */

int	_strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
