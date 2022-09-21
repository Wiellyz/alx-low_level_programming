#include "main.h"
/**
 * _strcat - Function to concatenate two strings
 * @dest: First string
 * @src: Second string
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = src[j];
	return (dest);
}
