#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes
 * @dest: The destination buffer
 * @src: The source string
 * @n: The number of bytes to copy
 *
 * Return: Pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy characters from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Fill remaining bytes with null characters if src is shorter than n */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
