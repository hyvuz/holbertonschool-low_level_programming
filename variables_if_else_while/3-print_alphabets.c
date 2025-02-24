#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, x;

	for (i = 97; i < 123; i++)
		putchar(i);

	for (x = 65; x < 91; x++)
		putchar(x);

	putchar('\n');

	return (0);
}
