#include "main.h"
/**
 * swap_int - swaping a and b
 * @a: the value for a
 * @b: the value for b
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
