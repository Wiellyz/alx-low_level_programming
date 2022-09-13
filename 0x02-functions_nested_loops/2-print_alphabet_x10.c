#include "main.h"
/**
 * print_alphabet_x10 - Nested for loop to print alphabet 10 times
 * Description: Print the alphabet 10 times in lower case
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
char c, i;
for (i = 0; i <= 9; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
