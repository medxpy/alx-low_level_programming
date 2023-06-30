#include "main.h"

/**
 * string_toupper - replace all lowercase letters of a string to upper
 * @s: string to modify
 * Return: The string modefied
 */

char	*string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
