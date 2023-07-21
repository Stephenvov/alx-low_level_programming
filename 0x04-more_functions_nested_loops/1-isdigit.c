#include "main.h"
/**
 * _isdigit: Entry
 * Description: is digit
 * @c: input
 * Return: 0 success
 */
int _isdigit(int c)
{
	if (c > 29 && c < 40)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
