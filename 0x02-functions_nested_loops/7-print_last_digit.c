#include "main.h"
/** 
 * print_last_digit - Entry
 * Description: print_last_digit
 * Return: 0
 */
int print_last_digit(int x)
{
	int y = x%10;
	_putchar('0' + y);
	return (y);
}
