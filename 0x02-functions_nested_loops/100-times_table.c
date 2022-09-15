#include "main.h"

/**
 * print_times_table - myfunc
 * @n: parameter
 * Description: n times table
 * Return: void
 */

void print_times_table(int n)
{
	if (!(n > 15) || !(n < 0))
	{
		for (int num = 0; num <= n; num++)
		{
			for (int num2 = 0; num2 <= n; num2++)
			{
				int r = num * num2;

				if (r < 10)
				{
					if (num2 != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(r + '0');
				}
				else if (r < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(r / 10 + '0');
					_putchar(r % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(r / 100 + '0');
					_putchar((r / 10) % 10 + '0');
					_putchar(r % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
