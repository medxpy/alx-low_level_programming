#include "main.h"
/**
 * _islower - check for lowercase character.
 * return 1 if c is lowercase, 0 otherwise
 * @c: is the charchater to check
 * Return: Always 0 on success
 */

int	_islower(int c)
{
	while (c != 0)
	{
		if ((c >= 97) && (c <= 122))
		{
			return (1);
		}
		else
			return (0);
	}
	return (0);
}
