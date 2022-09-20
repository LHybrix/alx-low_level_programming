#include "main.h"

/**
  * print_rev - myfunc
  * @s: pointer parameter
  * Description: Print but reversed
  * Return: void
  */

void print_rev(char *s)
{
	int l = 0;
	int *lp = &l;
	int lnIndex = *lp - 1;
	int lnIndexP = *(s + lnIndex);

	for (; *s != '\0'; s++)
	{
		*lp = l + 1;
	}
	while (lnIndexP >= *s)
	{
		_putchar(lnIndexP);
		lnIndexP--;
	}
}
