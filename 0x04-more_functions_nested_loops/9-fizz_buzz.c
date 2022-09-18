#include <stdio.h>

/**
 * main - entry
 * Description: Astress
 * Return: zero
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n == 1)
		{
			printf("%d", n);
		}
		else if (n % 15 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	putchar('\n');
	return (0);
}
