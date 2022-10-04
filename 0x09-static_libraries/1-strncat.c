#include "main.h"
/**
 * _strncat - Function to concatenate two strings
 * @dest: first string
 * @src:Second string
 * @n: Number of times to append
 * Return: chr
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (j = 0; i < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
