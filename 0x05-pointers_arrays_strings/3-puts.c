#include "main.h"

/**
  * _puts - myfunc
  * @str: pointer parameter
  * Description: Print
  * Return: coid
  */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
