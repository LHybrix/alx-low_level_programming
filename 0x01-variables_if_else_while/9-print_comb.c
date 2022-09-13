#include <stdio.h>

/**
 * main - entry
 * Description: "9"
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '8'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
