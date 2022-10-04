#include "main.h"
/**
 * _isalpha - Check for alphabetic character
 * Description: if an alphabet, return a certain value
 * @c: The parameter for the above function
 * Return: 0 0r 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
