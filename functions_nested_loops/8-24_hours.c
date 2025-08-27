#include "main.h"

/**
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++) /* Loop through hours */
	{
		for (minute = 0; minute < 60; minute++) /* Loop through minutes */
		{
			_putchar((hour / 10) + '0'); /* Print first digit of hour */
			_putchar((hour % 10) + '0'); /* Print second digit of hour */
			_putchar(':'); /* Print colon separator */
			_putchar((minute / 10) + '0'); /* Print first digit of minute */
			_putchar((minute % 10) + '0'); /* Print second digit of minute */
			_putchar('\n'); /* Print newline */
		}
	}
}
