#include "main.h"
/**
 * _isupper - Entry
 * Description: is uppercase
 * @c: input value
 * Return: 0 success
 */
int _isupper(int c)
{
	if ((c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
