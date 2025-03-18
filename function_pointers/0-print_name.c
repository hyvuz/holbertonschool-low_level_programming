#include "function_pointers.h"
#include <stddef.h>

/**
* print_name - Prints a name using a function pointer
* @name: The name to be printed
* @f: A pointer to a function that takes a char * argument
*
* Description: This function calls another function (pointed to by f)
* to print the given name. If f is NULL, the function does nothing.
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
