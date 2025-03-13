#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
*           which contains a copy of the string given as a parameter.
* @str: the string to copy
*
* Return: a pointer to the duplicated string, or NULL if insufficient memory.
*/
char *_strdup(char *str)
{
char *dup;
unsigned int i, j;

if (str == NULL)
return (NULL);

/* Find the length of the string */
for (i = 0; str[i] != '\0'; i++)
;

/* Allocate memory for the new string */
dup = malloc((i + 1) * sizeof(char));
if (dup == NULL)
return (NULL);

/* Copy the string to the newly allocated memory */
for (j = 0; j < i; j++)
dup[j] = str[j];

/* Null-terminate the new string */
dup[j] = '\0';

return (dup);
}
