#include <stdio.h>
#include "main.h"
int _islower(int c);

/**
  * _islower - myfunc
  * @c: fior
  * Description: checks for lower case
  * Return: 0
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
