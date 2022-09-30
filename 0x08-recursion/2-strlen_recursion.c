#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to count
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n = _strlen_recursion(s + 1);
		return (n += 1);
	}
	return (0);
}
