#include "main.h"

/**
 * _strcat - concetenates the string pointed to by @src to the end
 * @dest: string to be appended
 * @src: string to be concatenated upon
 *
 * Return: pointer to @dest
 */

char *_strcat(char *dest, char *src)
{

	int index = 0, dest_len = 0;
	while (dest[indes++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
