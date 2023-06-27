#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by src to to dest
 * @dest: The destination
 * @src: The string to be copied
 * Return: pointer to dest
 * By Medxpy
 */

char	*_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
