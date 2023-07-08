#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: is the character to check
 * return 1 if c is a letter, 0 otherwise
 * Return: Always 0 on success
 */

int	_isalpha(int c)
{
	while (c != 0)
	{
		if ((c <= 122 && c >= 97) || (c >= 65 && c <= 90))
			return (1);
		else
			return (0);
	}
	return (0);
}
