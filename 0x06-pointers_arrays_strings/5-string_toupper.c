#include "main.h"

/**
 * string-toupper - changes all lowercase to upprcase
 * @s: string to modify
 *
 * Return: resulting string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
