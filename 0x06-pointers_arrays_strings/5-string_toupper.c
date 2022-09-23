#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters to
 * uppercase in a string.
 * @s: character to make uppercase
 * Return: return value of upper
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if  (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;

	return (s);
}
