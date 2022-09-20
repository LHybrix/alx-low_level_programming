#include "main.h"

/**
  * _strlen - myfunc
  * @s: pointer parameter
  * Description: Lenth of string
  * Return: Length
  */

int _strlen(char *s)
{
	int index = 0;

	for (; *s != '\0'; s++)
	{
		index++;
	}
	return (index);
}
