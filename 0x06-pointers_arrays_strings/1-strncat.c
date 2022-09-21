#include "main.h"
/**
 * _strncat - concatenate two strings but add inputted number
 * @dest: string to be appended upon
 * @src: string to be completed 
 * @n: integer parameter
 * Return: returns new concanated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int index = 0, dest, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
