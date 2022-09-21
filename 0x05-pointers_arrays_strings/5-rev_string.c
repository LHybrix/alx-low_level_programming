#include "main.h"

/**
  * rev_string - myfunc
  * @s: pointer parameter
  * Description: Reverse
  * Return: void
  */

void rev_string(char *s)
{
	int le = 0;
	char ph[le];
	int i, j;

	for (; *s != '\0'; s++)
	{
	le++;
	}

	i = 0;
	j = le - 1;

	for (; i < le; i++, j--)
	{
		ph[i] = s[j];
	}

	s = ph;
}
