#include "main.h"
/**
 * jack_bauer - prints the time
 * n counts hours and minutes
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hrs_remainder;
	int mins_remainder;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
		        mins_remainder = minutes % 10;
		        hrs_remainder = hours % 10;

			_putchar(hours / 10 + '0');
			_putchar(hrs_remainder + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(mins_remainder + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
