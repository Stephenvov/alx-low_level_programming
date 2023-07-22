#include "main.h"
/**
 * _isdigit - Entry
 * Description: checking is digit
 * @c: input value
 * Return: 1 success
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
