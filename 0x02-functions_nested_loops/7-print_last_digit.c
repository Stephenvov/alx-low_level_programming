#include "main.h"
/** 
 * print_last_digit - Entry
 * Description: print_last_digit
 * @x: input value
 * Return: 0
 */
int print_last_digit(int x)
{
	int y;

	if (x < 0)
	{
		x = x*-1;
	}
	y = x%10;
	_putchar('0' + y);
	return (y);
}
