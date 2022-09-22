#include "main.h"

/**
 * _strncpy - copies string
 * @dest: destination
 * @src: source
 * @n: no. of bytes to cpy
 *
 * Return: pointer to resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
