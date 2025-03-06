#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to find
 *
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s) /* Loop through the string */
	{
		if (*s == c) /* If character matches, return pointer */
			return (s);
		s++;
	}

	if (c == '\0') /* If searching for null terminator, return its position */
		return (s);

	return (0); /* If character is not found, return NULL */
}
