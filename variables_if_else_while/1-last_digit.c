#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	{
		int ld = n % 10;
		if (n < 6 && n != 0)
		{
			printf("Last digit of %d is %d and is less than 6 but not 0\n", n, ld);
		}
		if (n > 5) 
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, ld);
		}
		if (n == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, ld);
		}
	}
	return (0);
}
