#include "main.h"
/**
 * _strchr - Function to check for a character in a string
 * @s: String to be checked
 * @c: character to check for.
 * Return: A pointer.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (0);
}
