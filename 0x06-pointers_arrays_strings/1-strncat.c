#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */

char	*_strncat(char *dest, char *src, int n)
{
	unsigned int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;

	while (src[i] != '\0' && j < n)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
