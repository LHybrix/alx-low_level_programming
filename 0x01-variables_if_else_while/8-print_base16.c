#include <stdio.h>

/**
 * main - "entry"
 * Description: "9"
 * Return: "zero"
 */

int main(void)
{
	int i;
	char c;

	for (i = '0'; i < 10; i++)
	{
		putchar(i);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
