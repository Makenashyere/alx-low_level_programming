#include "main.h"

/**
 * _strncat - concetenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: no. of bytes
 *
 * Return: pointer to tyhe resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
