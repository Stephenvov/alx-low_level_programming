#include "main.h"
/**
 * _isupper - Entry
 * Description: is uppercase
 * Return: 0 success
 */
int _isupper(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
