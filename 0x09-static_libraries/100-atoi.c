#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The string to get converted
 * Return: The integer converted from the string
 * By Medxpy
 */

int	_atoi(char *s)
{
	int i;
	int signe;
	int result;

	i = 0;
	signe = 1;
	result = 0;

	while (s[i] == ' ' 
			|| s[i] == '\n' || s[i] == '\r' || s[i] == '\f'
			|| s[i] == '\v' || s[i] == '\t' )
		i++;
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			signe = -signe;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10;
		result += s[i] - '0';
		i++;
	}
	return (result * signe);
}
