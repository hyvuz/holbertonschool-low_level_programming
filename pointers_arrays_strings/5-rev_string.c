#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char temp;

	/* Find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Swap characters from start to end */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
