#include "main.h"
/**
 * _strcat - join 2 strings.
 * @dest: string
 * @src: string
 * Return:  0.
 */
char *_strcat(char *dest, char *src)
{
	int dest_l, src_l;

	dest_l = 0;
	 src_l= 0;

	while (*(dest + dest_l) != '\0')
		dest_l++;

	while (*(src + src_l) != '\0' && dest_l < 97)
	{
		*(dest + dest_l) = *(src + src_l);
		dest_l++;
		scr_l++;
	}
	*(dest + dest_l) = '\0';
	return (dest);
}

