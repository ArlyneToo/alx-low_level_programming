#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print if a number is positive zero or Negative
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /2;

	if(n>0)
	{
	printf("%d is positive\n",n);
	}
        elseif (n==0);
	{
	printf("%d is zero\n",n);
	]
	else
	{
	printf("%d is negative\n",n);
	}

        return (0);
	}