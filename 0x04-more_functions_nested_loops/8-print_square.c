#include "main.h"

/**
 * print_square - myfunc
 * Description: loop
 * @size: Para
 * Return: void
 */

void print_square(int size)
{
	int i;
	int repeatWholeThing;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (repeatWholeThing = 0; repeatWholeThing < size; repeatWholeThing++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
