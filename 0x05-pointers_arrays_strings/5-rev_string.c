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
	char ph[100];
	char *php = ph;
	int i, j;

	for (; *s != '\0'; s++)
	{
	le++;
	}

	for (i = 0, j = le - 1; i < le; i++, j--)
	{
		ph[i] = s[j];
	}

	for (i = 0; *php != '\0'; php++, i++)
	{
		s[i] = *php;
	}
}
