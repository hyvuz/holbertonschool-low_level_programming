#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	/* Find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Print characters in reverse order */
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	/* Print a new line after the reversed string */
	_putchar('\n');
}
