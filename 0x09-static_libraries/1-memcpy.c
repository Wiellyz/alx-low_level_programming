#include "main.h"
/**
 * _memcpy - Function to copy memory area
 * @src: Data to be copied
 * @dest: Location to be copied to
 * @n: Number of times
 * Return: A pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
