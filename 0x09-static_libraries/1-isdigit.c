#include "main.h"

/**
 * _isdigit - check for a digit 0 through 9
 * @c: Is the character to check
 * Rerurn: 1 if @c is a digit, 0 otherwise
 * Return: 0 on success.
 */

int	_isdigit(int c)
{
	while (c != 0)
	{
		if ((c >= 48 && c <= 57))
			return (1);
		else
			return (0);
	}
	return (0);
}
