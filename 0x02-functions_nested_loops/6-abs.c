#include "main.h"

/**
 * _abs - myfunc
 * @num: parameter
 * Description: Absolute value
 * Return: various
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (num *= -1);
	}
	return (num);
}
