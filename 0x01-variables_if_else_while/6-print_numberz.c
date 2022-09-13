#include <stdio.h>

/**
 * main - Prints single digits from base 10 to 0
 *
 * Return:Always (Successful)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
