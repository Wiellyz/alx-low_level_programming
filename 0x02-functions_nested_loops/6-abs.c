#include "main.h"
/**
 * _abs - Functionto compute abs value of integer
 * @c: Parameter of the function above 
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c ==0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
