#include "main.h"

/**
 * jack_bauer - myfunc
 * Description: hmm
 * Returen: hmm
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		int hl = h % 10;
		int hf = h / 10;

		for (m = 0; m < 60; m++)
		{
			int ml = m % 10;
			int mf = m / 10;

			_putchar(hf + '0');
			_putchar(hl + '0');
			_putchar(':');
			_putchar(mf + '0');
			_putchar(ml + '0');
			_putchar('\n');
		}
	}
}
