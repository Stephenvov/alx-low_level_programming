#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *  main - Entry
 *  Description: if statement
 *  Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
		printf("Last digit of %d and is greater than 5", n);
	else if (n == 0)
		printf("Last digit of %d and is 0", n);
	else if (n < 6 && n != 0)
		printf("Last digit of %d and is less than 6 and not 0", n);
	return (0);
}
