#include "main.h"
/**
 * _islower - entry
 * @parameterc: Description of parameter c
 * Description: check if islower
 * Return: 0
*/
int _islower(int c)
{
	int x = c;

	if (x > 96 && x < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
