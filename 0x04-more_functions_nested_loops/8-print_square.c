#include "main.h"
/**
 * print_square - Prints a square on the terminal
 * @size: Size of the square
 * Return: 0 or 1
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
