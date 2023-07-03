#include "main.h"

/**
 * _strchr - search for a character in a string
 * @s: The string to search in
 * @c: The character to search for
 * Return: Pointer to th first occurence of th character c
 * or NULL if the character is not found
 */

char	*_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		if (c == '\0')
			return ('\0');
		i++;
	}
	return (s);
}
