#include <stdio.h>
#include "main.h"

/**
 * main - entry
 * Description: "1"
 * Return: 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

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
