#include "main.h"

/**
 * _strcmp - Compare two string
 * @s1: first string
 * @s2: second string
 * Return: The result of comparing two string
 */

int	_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
