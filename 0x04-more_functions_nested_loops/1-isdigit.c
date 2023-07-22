#include "main.h"
#include <stdio.h>
/**
 * _isdigit - Entry
 * Description: checking is digit
 * @c: input value
 * Return: 1 success
 */
int _isdigit(int c)
{
	int x = c;

	if (x > 9)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
