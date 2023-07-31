#include "main.h"
/**
* largest_number - the largest of 3 numbers
* @a: first number
* @b: second number
* @c: third number
* Return: 0 success
*/
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
