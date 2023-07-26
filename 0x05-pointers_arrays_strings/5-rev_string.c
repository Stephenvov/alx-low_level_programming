#include "main.h"
/**
 * rev_string - printing reverse string
 * @s: variable for string
 */
void rev_string(char *s)
{
	char s_rev = s[0];
	int x;
	int i;

	while (*s != '\0')
	       x++;	
	for (i = 0; i < x; i++)
	{
		s_rev = s[i];
		s[i] = s[x];
		s[x] = s_rev;
	}
}
