#include "main.h"

/**
 * jack_bauer - myfunc
 * Description: Print fuck all
 * Return: hmm
 */

void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 2; i++)
	{
		_putchar(i + '0');
		if (i != 2)
		{
			for (j = 0; j <= 9; j++)
			{
				_putchar(j + '0');
				_putchar(':');
				for (k = 0; k <= 6; k++)
				{
					_putchar(k + '0');
					if (k != 6)
					{
						for (l = 0; l <= 9; l++)
						{
							_putchar(l + '0');
						}
					}
					else
					{
						_putchar('0');
					}
				}
			}
		}
		else
		{
			for (j = 0; j <= 3; j++)
			{
				_putchar(j + '0');
				_putchar(':');
				for (k = 0; k <= 6; k++)
				{
					_putchar(k + '0');
					if (k != 6)
					{
						for (l = 0; l <= 9; l++)
						{
							_putchar(l + '0');
						}
					}
					else
					{
						_putchar('0');
					}
				}
			}
		}

	}
}
