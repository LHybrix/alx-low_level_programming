#include "main.h"

/**
 * times_table - myfunc
 * Description: 9 times table
 * Return: void
 */

void times_table(void)
{
	int num;
	int num2;

	for (num = 0; num < 10; num++)
	{
		for (num2 = 0; num < 10; num++)
		{
			int r = num * num2;
				if (r == 0)
				{
					_putchar(r + '0');
				}
				else if (r < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(r + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(r / 10 + '0');
					_putchar(r % 10 + '0');
				}
		}
		_putchar('\n');
	}
}
