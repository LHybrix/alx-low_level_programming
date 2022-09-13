#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - entry
 * Description: "prints all lowercased alphabets"
 * Return: void
 */

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
