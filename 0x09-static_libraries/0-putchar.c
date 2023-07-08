#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print _putchar followed by new line
 * Return: Always 0 on success
 * By Medxpy
 */

int	_putchar(char c)
{
	return (write(1, &c, 1));
}
