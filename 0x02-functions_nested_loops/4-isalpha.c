#include "main.h"

/**
 * _isalpha - checks for alpha char
 * @c: char
 * Return: 1 if a letter
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
