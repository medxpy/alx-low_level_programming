#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search in
 * @accept: The bytes in string to search for
 * Return: Pointer to the byte in s that match one of the bytes in accept
 */

char	*_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}

