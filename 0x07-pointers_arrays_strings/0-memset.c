#include "main.h"
/**
 * _memset - Function to print memory with a constant byte
 * @s: First parameter, pointer to constant byte
 * @b: Second parameter, char to be printed
 * @n: Third parameter, size
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
