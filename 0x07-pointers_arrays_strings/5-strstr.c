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

	if (*haystack == '\0')
		return ('\0');
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j])
		{
			if (needle[j] != haystack[i + j])
				break;
			j++;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
		i++;
	}
	return ('\0');
}
