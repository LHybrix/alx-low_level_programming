#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry
 * Description: "1"
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int ln;
        ln = n % 10;
	if (ln > 5)
	{
		printf("Last digit of %d is %d and is grater than 5", n, ln);
	}
	else if (ln == 0)
	{
		 printf("Last digit of %d is %d and is 0", n, ln);
	}
	else
	{
		 printf("Last digit of %d is %d and is less than 6 and not 0", n, ln);
	}
	return (0);
}
