#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the main string to search
 * @accept: the characters to match in the prefix substring
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int i, found;

    while (*s) /* Iterate through the string s */
    {
        found = 0;
        for (i = 0; accept[i]; i++) /* Check if s[i] exists in accept */
        {
            if (*s == accept[i])
            {
                count++;
                found = 1;
                break; /* Stop checking once we find a match */
            }
        }
        if (!found) /* If the character is not in accept, stop counting */
            break;
        s++;
    }
    return (count);
}
