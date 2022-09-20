#include "main.h"

/**
  * swap_int - myfunc
  * @a: first parameter
  * @b: second parameter
  * Description: Swap
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int c;
	int *cp = &c;

	*cp = *a;
	*a = *b;
	*b = *cp;
}
