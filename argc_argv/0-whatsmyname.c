#include <stdio.h>

/**
 * main - prints the program name
 * @argc: argument count
 * @argv: array of argument strings
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void)argc; /* silence unused parameter warning */
	printf("%s\n", argv[0]);
	return (0);
}
