#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of chars
 * @size: the size of the array
 * @c: Character to initialized th array
 * Return: A pointer to the array or NULL if it fails
 */

char	*create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	i = 0;

	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
