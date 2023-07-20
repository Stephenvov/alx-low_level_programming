#include "main.h"
/**
 * _islower - entry
 * Description: check if islower
 * Return: 0
*/
int _islower(int c)
{
	int x = c;

	if (x > 47 && x < 75)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
