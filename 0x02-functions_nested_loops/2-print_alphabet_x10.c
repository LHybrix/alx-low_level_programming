#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - entry
 * Descriprion: print alphabet ten times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int a;
	int numof;

	for (numof = '0'; numof <= '9'; numof++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar (a);
		}
		putchar ('\n');
	}
}
