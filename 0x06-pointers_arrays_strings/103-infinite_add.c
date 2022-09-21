#include "main.h"

/**
 * infinite_add - C function that adds two numbers stored
 * in strings to a buffer.
 * assumes that strings are never empty and
 * that numbers will always be positive, or 0.
 * assumes there are only digits stored in the number strings.
 * if result can be stored in the buffer
 * retirns a pointer
 * if result cannot be restored in the buffer, returns `0`.
 * @n1: 1st number
 * @n2: 2nd number
 * @r: store result
 * @size_r: size of buffer
 * Return: returns pointer to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}

/**
 * add_strings -adds the numbers
 * @n1: the string with the 1st number
 * @n2: the string with the 2nd number
 * @r: the buffer to store result
 * @r_index: the current buffer index
 *
 * Return: if r can store the sum - a pointer to result
 *         if r cant store the sum - 0.
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n1; n1--; r_index++)
	{
		num = *(n1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n2; n2--; r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

}
