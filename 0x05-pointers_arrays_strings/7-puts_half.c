#include "main.h"

/**
  * puts_half - myfunc
  * @str: pointer parameter
  * Description: Print
  * Return: coid
  */

void puts_half(char *str)
{
	int sh, shOdd;
	int l = 0;

	for (; *str != '\0'; str++)
	{
		l++;
	}

	sh = l / 2 - 1;
	shOdd = (l - 1) / 2 - 1;

	if (l % 2 == 0)
	{
		for (; str[sh] < str[l]; sh++)
		{
			_putchar(str[sh]);
		}
	}
	else
	{
		for (; str[shOdd] < str[l]; shOdd++)
		{
			_putchar(str[shOdd]);
		}
	}
}
