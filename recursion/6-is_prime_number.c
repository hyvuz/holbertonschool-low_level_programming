#include "main.h"

/**
 * check_prime - Helper function to check if a number is prime.
 * @n: Number to check.
 * @i: Current divisor to test.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int check_prime(int n, int i)
{
	if (i * i > n)  /* If i squared is greater than n, it's prime */
		return (1);
	if (n % i == 0)  /* If n is divisible by i, it's not prime */
		return (0);
	return (check_prime(n, i + 1));  /* Recursive check */
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)  /* 0 and 1 are not prime, and negative numbers too */
		return (0);
	if (n == 2)  /* 2 is the smallest prime number */
		return (1);
	return (check_prime(n, 2));  /* Start checking from 2 */
}
