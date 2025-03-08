#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root of n, or -1 if no natural square root exists.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_binary(n, 1, n / 2));
}

/**
 * _sqrt_binary - Finds the square root using binary search.
 * @n: The number to find the square root of.
 * @low: The lower bound of the search.
 * @high: The upper bound of the search.
 *
 * Return: The square root of n, or -1 if no natural square root exists.
 */
int _sqrt_binary(int n, int low, int high)
{
	int mid = (low + high) / 2;
	long square = (long)mid * mid;

	if (low > high)
		return (-1);
	if (square == n)
		return (mid);
	if (square < n)
		return (_sqrt_binary(n, mid + 1, high));
	return (_sqrt_binary(n, low, mid - 1));
}
