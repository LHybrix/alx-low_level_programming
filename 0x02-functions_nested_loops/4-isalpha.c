#include <stdio.h>
#include "main.h"

/**
 * _isalpha - myfunc
 * @c: parameter
 * Description: Checks Alphabet
 * Return: 1 if true, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
