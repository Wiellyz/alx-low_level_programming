#include "main.h"
#include <stdio.h>
/**
 * _strspn - function to get the lenght of a prefix substring
 * @s: First string parameter
 * @accept: Second string parameter
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				result++;
				break;
			}
		}
		if (s[j] == '\0')
		{
			return (result);
		}
	}
	return (result);
}

