#include <stdio.h>
#include "main.h"

/**
 * print_sign - my func
 * @n: int parameter
 * Description: Prints sign
 * Return: 0, 1, -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n < 0)
	{
		printf("-");
		return (-1);
	}
	else
	{
		printf("0");
		return (0);
	}
}
