#include<stdio.h>

/**
 * main - entry
 * Description: forkin thing
 * Return: zero
 */

int main(void)
{
	int n;

	for (n = 0; n < 100; n++)
	{
		int firstn = n / 10;
		int lastn = n % 10;

		if (!(firstn >= lastn))
		{
			putchar(firstn + '0');
			putchar(lastn + '0');
			if (firstn != 8 && lastn != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
