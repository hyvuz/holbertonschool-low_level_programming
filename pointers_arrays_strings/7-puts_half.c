#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	/* Find the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* If the string length is odd, start at (len / 2) + 1 */
	if (len % 2 == 1)
	{
		i = (len / 2) + 1;
	}
	else
	{
		i = len / 2;
	}

	/* Print the second half of the string */
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	/* Print a new line after the string */
	_putchar('\n');
}
