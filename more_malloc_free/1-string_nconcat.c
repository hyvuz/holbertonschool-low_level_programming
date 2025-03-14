#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
* @n: The number of bytes to concatenate from s2.
*
* Return: A pointer to the newly allocated memory containing s1,
*         followed by the first n bytes of s2, and null terminated.
*         If the function fails, it returns NULL.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1, len2, i;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

len1 = strlen(s1);
len2 = strlen(s2);

if (n >= len2)
{
n = len2;
}

result = malloc(sizeof(char) * (len1 + n + 1)); /* +1 for null terminator */

if (result == NULL)
{
return (NULL);
}

for (i = 0; i < len1; i++)
{
result[i] = s1[i];
}

for (i = 0; i < n; i++)
{
result[len1 + i] = s2[i];
}

result[len1 + n] = '\0'; /* Null-terminate the string */

return (result);
}
