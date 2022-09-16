#include "main.h"
/**
 * print_line - Prints a line across the screen'
 * @n: Integer to print stuff
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
