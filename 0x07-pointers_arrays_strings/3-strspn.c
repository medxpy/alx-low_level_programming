#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s:The string
 * @accept: The substring
 * Return: The numbers of bytes in th initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int res;

	res = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				res += 1;
				break;
			}
			j++;
		}
		if (!accept[j])
			break;
		i++;
	}
	return (res);
}
