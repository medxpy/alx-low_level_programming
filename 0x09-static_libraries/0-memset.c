#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 * @s: pointed to
 * @b: the constant
 * @n: the n bytes
 * Return: a pointer to the memory area s
 */

char	*_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
