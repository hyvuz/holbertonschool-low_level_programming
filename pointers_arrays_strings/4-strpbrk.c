#include "main.h"
#include <stddef.h>  /* Include this header to define NULL */

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The string containing the bytes to search for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	/* Iterate through each character of s */
	while (*s)
	{
		/* Check if the current character is in accept */
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s); /* Return pointer to the match in s */
		}
		s++; /* Move to the next character in s */
	}

	return (NULL); /* Return NULL if no match is found */
}
