#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: negative value if s1 < s2, positive value if s1 > s2, 0 if equal.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2) /* Loop until one of the strings ends. */
	{
		if (*s1 != *s2) /* If characters differ, return the difference. */
			return (*s1 - *s2);
		s1++; /* Move to the next character in s1. */
		s2++; /* Move to the next character in s2. */
	}

	/*
	 * If both strings are equal up to the null-terminator of one,
	 * compare the null-terminators.
	 */
	return (*s1 - *s2);
}

