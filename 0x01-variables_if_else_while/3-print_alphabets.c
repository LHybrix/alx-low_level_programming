#include <stdio.h>

/**
 * main - entry
 * Description: "IDK"
 * Return: 0
 */

int main(void)
{
	char lalpha = 'a';
	char ualpha = 'A';

	while (lalpha <= 'z')
	{
		putchar(lalpha);
		lalpha++;
	}

	while (ualpha <= 'Z')
	{
		putchar(ualpha);
		ualpha++;
	}

	putchar('\n');
	return (0);
}
