#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The main string to search.
 * @accept: The characters to match in the prefix substring.
 *
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, found;

	while (*s) /* Iterate through s */
	{
		found = 0;
		for (i = 0; accept[i]; i++) /* Check if *s exists in accept */
		{
			if (*s == accept[i])
			{
				count++;
				found = 1;
				break; /* Stop checking once a match is found */
			}
		}
		if (!found) /* If *s is not in accept, stop counting */
			break;
		s++;
	}

	return (count);
}
