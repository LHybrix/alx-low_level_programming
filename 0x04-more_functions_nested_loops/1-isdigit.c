#include "main.h"
int _isdigit(int c);

/**
  * _isdigit - myfunc
  * @c: fior
  * Description: checks for number
  * Return: 0
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
