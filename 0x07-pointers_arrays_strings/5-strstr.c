#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string to locate in
 * @needle: The substring to locate for
 * Return: Pointer to the beginning of the located string or
 * NULL if the substring is not found
 */

char	*_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j])
		{
			if (haystack[i] == needle[j])
				return (needle);
			j++;
		}
		i++;
	}
	if (!needle)
		return ('\0');
}
