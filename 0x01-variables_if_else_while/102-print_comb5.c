#include
< stdio.h >
/**
 * main - Prints posibble combinationof two digit numbers
 *
 * Return:Always sero at the end
 */
int main(void)
{
	int i, p;

	for (i = 0; i < 100; i++)
	{
		for (p = 0; p < 100; i++)
			{
				if (p > i)
				{
					putchar((i / 10) + '0');
					putchar((i % 10) + '0');
					putchar(',');
					putchar((p / 10) + '0');
					putchar((p % 10) + '0');
					if (i != 98)
					{
						putchar(',');
						putchar(' ');
					}
				}

			}
	}
	putchar('\n');
	return (0);
}