#include "main.h"
int _isupper(int c);

/**
  * _isupper - myfunc
  * @c: fior
  * Description: checks for upper case
  * Return: 0
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
