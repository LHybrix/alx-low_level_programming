#include "main.h"

/**
 * print_triangle - myfunc
 * Description: loop
 * @size: Para
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int noOfSpaces;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (noOfSpaces = size - 1; noOfSpaces > 0; noOfSpaces--)
			{
				_putchar(' ');
			}
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
