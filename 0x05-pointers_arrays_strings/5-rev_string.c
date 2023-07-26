#include "main.h"
/**
 * rev_string - printing reverse string
 * @s: variable for string
 */
void rev_string(char *s)
{
	int x = sizeof(s) / sizeof(s[0]);
	int i;
	char s_rev = s[0];

	for (i = 0; i < x; i++;)
	{
		x--;
		rv = s[i];
		s[i] = s[x];
		s[x] = rv;
	}
}
