#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Return: Nothing
 */
void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++) /* Loop through rows */
	{
		for (col = 0; col <= 9; col++) /* Loop through columns */
		{
			product = row * col;

			if (col == 0)
			{
				_putchar(product + '0'); /* Print first number */
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				/* Handle spacing for single and double-digit numbers */
				if (product < 10)
				{
					_putchar(' ');
					_putchar(product + '0');
				}
				else
				{
					_putchar((product / 10) + '0'); /* Print tens digit */
					_putchar((product % 10) + '0'); /* Print ones digit */
				}
			}
		}
		_putchar('\n'); /* Print newline at end of row */
	}
}
