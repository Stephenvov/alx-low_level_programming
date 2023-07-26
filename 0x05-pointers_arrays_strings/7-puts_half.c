#include "main.h"
/**
 * puts_half - printing reverse string
 * @s: variable for string
 */
void puts_half(char *s)
{
	int x = sizeof(s) / sizeof(s[0]);
	int half = x / 2;

	_putchar(half + '0');
}
