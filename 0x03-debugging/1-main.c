#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;
	/**
	 * the while loop didn't get incremented
	 */

        while (i < 10)
	{
		putchar(i);
	}
	printf("Infinite loop avoided! \\o/\n");
	
	return (0);
}
