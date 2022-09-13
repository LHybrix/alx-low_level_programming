#include <stdio.h>

/**
 * main - entry
 * Description: "IDK"
 * Return: 0
 */

int main(void)
{
	char al = 'a';

	while (al < 'z' && al > 'q' && al < 'q' && al > 'e' && al < 'e')
	{
		putchar(al);
		al++;
	}
	putchar('\n');
	return (0);
}
