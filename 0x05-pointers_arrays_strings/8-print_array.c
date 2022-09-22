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
	int n1 = n - 1;

	for (i = 0; a[i] < a[n1]; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n1]);
}
