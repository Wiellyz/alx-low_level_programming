#include "main.h"
/**
 * swap_int - Function to swap values of variable
 * @a: first parameter of the above function
 * @b: second parameter of the above function
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}
