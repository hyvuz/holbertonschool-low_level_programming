#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	/* Print every other character starting from the first one */
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}

	/* Print a new line after the string */
	_putchar('\n');
}
