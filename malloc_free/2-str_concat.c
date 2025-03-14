#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings and returns a new allocated string.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to newly allocated memory containing s1 followed by s2,
 *         or NULL if allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *new_str;

	/* Treat NULL inputs as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate lengths of both strings */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Allocate memory for the concatenated string (+1 for null terminator) */
	new_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	/* Copy first string (s1) to new_str */
	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	/* Append second string (s2) to new_str */
	for (j = 0; j < len2; j++)
		new_str[i + j] = s2[j];

	/* Null-terminate the new string */
	new_str[i + j] = '\0';

	return (new_str);
}
