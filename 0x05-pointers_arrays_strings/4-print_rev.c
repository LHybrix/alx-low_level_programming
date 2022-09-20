#include "main.h"

/**
  * print_rev - myfunc
  * @s: pointer parameter
  * Description: Print but reversed
  * Return: void
  */

void print_rev(char *s)
{
	char *l = s;

	for (; *s != '\0'; s++)
	;
	s--;
	while (s >= l)
	{
		_putchar(*s);
		s--;
	}
}
