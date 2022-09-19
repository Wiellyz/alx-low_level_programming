#include "main.h"
/**
 * _strlen - Function to determine the lenght of a string
 * @s: Parameter of the above function
 * Return: 0
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
