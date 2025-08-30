#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: argument count
 * @argv: array of argument strings
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void)argv; /* silence unused variable warning */
	printf("%d\n", argc - 1);
	return (0);
}
