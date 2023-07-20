#include "main.h"
/**
 * _isalpha - entry
 * @c: Description of parameter c
 * Description: check if islower
 * Return: 0
*/
int _isalpha(int c)
{
	int x = c;

	if (x > 64 && x < 91 )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
