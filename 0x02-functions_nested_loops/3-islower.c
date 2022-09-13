#include "main.h"
/**
 * _islower - to check if alphabet is lowercase
 * Description: If alphabet is lowercase, print a certain return statement
 * @c: Parameter in lowercase
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
