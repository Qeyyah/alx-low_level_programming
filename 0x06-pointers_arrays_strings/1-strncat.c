#include "main.h"
/**
 * _strncat - concatenate two strings but add inputted number of bytes
 * @dest: string to be appended upon
 * @src: string to be completed at end of the dest
 * @n:integer parameter to compare index to
 * Return: returns new concatenates string
 */

chars *_strncat(char *dest, char *src, int n)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_lens++;

	for (index = 0; src[indexc] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);

}
