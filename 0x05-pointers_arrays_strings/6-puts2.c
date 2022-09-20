#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - Function that prints any other character of a string
 * @str: String to put twice
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
