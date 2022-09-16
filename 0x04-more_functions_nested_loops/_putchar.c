#include <unistd.h>
#include "main.h"
/**
 * _putchar - prints a character
 * @c: Character to print
 * Return: 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
} 
