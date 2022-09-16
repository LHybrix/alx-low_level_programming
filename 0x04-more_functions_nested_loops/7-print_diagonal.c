#include "main.h"

/**
 * print_diagonal - myfunc
 * @n: parameter
 * Description - prints diagonal n times
 * Return - Void
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
