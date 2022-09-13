#include <stdio.h>

/**
 * main - entry
 * Description: "IDK"
 * Return: 0
 */

int main(void)
{
	char al = 'a';

	while (al < 'z')
	{
		if (al != 'e' && al != 'q')
		{
			putchar(al);
		}
		al++;
	}
	putchar('\n');
	return (0);
}
