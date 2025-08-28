#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the null byte
 * @dest: the destination buffer
 * @src: the source string to copy
 *
 * Return: a pointer to the destination string dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copy each character from src to dest */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Append the null byte at the end of dest */
	dest[i] = '\0';

	return (dest);
}
