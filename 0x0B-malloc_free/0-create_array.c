#include "main.h"

/**
 * create_array - myfunc
 * @size: Size of array
 * @c: char to be replicated
 * Description: create array of c
 * Return: array
 */


char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	ch = malloc((sizeof(char) * size) + sizeof(char));

	ch[size + 1] = '\0';

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}

	return (ch);
}
