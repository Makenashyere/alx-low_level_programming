#include "main.h"

/**
 * puts2 - prints one char
 * @str: string
 */
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
