#include "main.h"
#include <stdio.h>

/**
  * print_array - myfunc
  * @a: array pointer parameter
  * @n: number of elements
  * Description: Print every other
  * Return: void
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] < a[n]--; i++)
	{
		printf("%d, ", a[i]);
	}
}
