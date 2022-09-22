#include "main.h"

/**
 * largest_number - return the largest of 3 numbers
 * @a: first number
 * @b: secomd number
 * @c: third number
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;

	}

	return (largest);
}
