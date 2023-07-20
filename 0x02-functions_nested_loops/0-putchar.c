#include <stdio.h>
#include "main.h"
/**
 * main - Entry
 * Description: display _putchar
 * Return: 0 (success)
 */
int _putchar(char c);
int main(void)
{
	char x[] = "_putchar";
	int i = 0;

	while (i < sizeof(x)/sizeof(x[0]))
	{
		_putchar(x[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
