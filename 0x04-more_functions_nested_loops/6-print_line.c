#include "main.h"

/**
 * print_line - myfunc
 * @n: parameter
 * Description - prints line n times
 * Return - Void
 */

void print_line(int n)
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
			_putchar('_');
		}
	}
}
