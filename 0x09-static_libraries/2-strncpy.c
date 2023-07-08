#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest : The destination where to copy
 * @src : The source to copy from
 * @n : Number of byte to copy
 * Return: The string copied from src to dest
 */

char	*_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
