#include <stdio.h>
#include "main.h"

/**
 * _islower - entry
 * Description: checks for lower case
 * Return: int
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
