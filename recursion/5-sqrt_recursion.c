#include "main.h"

/**
 * _sqrt_search - Performs binary search to find the square root.
 * @n: The number to find the square root of.
 * @low: The lower bound of the search.
 * @high: The upper bound of the search.
 *
 * Return: The square root of n, or -1 if no natural square root exists.
 */
int _sqrt_search(int n, int low, int high)
{
	int mid;

	if (low > high)
		return (-1);

	mid = (low + high) / 2;

	if (mid * mid == n)
		return (mid);
	if (mid * mid > n)
		return (_sqrt_search(n, low, mid - 1));
	return (_sqrt_search(n, mid + 1, high));
}

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
	return (_sqrt_search(n, 1, n));
}
