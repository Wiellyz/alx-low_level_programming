#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Aprogram to print the alphabets in both upper and lower case
 * Return: Always 0
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}

char C;
for (C = 'A'; C <= 'Z'; C++)
{
putchar(C);
}
putchar('\n');
return (0);
}
