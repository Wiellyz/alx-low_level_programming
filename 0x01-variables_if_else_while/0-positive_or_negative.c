#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n <= 0)
{
  if (n == 0)
    printf("%i is 0\n", n);
  else
    printf("%i is negative\n", n);
}
else
printf("%d is positive\n", n);
return (1);
}
