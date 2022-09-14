#include "main.h"

/**
 * print_last_digit - myfunc
 * @num: parameter
 * Description: print last digit
 * Return: various
 */

int print_last_digit(int num)
{
	if (num < 0)
	{
		return ((num % 10) * -1);
	}
	return (num % 10);
}
