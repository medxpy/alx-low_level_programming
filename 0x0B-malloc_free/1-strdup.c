#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Duplicate a string
 * @str: The string to duplicate
 * Return: Pointer to the duplicated string, NULL if insufficient memory
 */

char	*_strdup(char *str)
{
	char *newStr;
	unsigned int i;
	int len;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	newStr = (char *)malloc((len + 1) * sizeof(char));
	if (newStr == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		newStr[i] = str[i];
		i++;
	}
	newStr[i] = '\0';
	return (newStr);
}

