#include "main.h"

/**
 * _isupper - check for uppercase character.
 * @c: The charcter to check.
 * Return: 1 if @c is uppercase return 0 otherwise.
 */

int	_isupper(int c)
{
	while (c != 0)
	{
		if ((c >= 65) && (c <= 90))
			return (1);
		else
			return (0);
	}
	return (0);
}
