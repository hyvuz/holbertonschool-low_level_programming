#include <stdlib.h>
#include "main.h"

/**
* _calloc - Allocates memory for an array, initializes it to zero.
* @nmemb: The number of elements in the array.
* @size: The size of each element in the array.
*
* Return: Pointer to the allocated memory, or NULL if nmemb or size is 0,
*         or if malloc fails.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;

/* If nmemb or size is 0, return NULL */
if (nmemb == 0 || size == 0)
return (NULL);

/* Allocate memory using malloc */
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);

/* Initialize memory to zero */
for (i = 0; i < (nmemb * size); i++)
((char *)ptr)[i] = 0;

return (ptr);
}
