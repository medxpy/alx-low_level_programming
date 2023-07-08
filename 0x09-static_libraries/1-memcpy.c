#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: Destination memroy
 * @src: Source memory to copy from
 * @n: Bytes to copy
 * Return: Pointer to dest
 */

char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
