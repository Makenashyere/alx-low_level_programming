#include "main.h"

/**
 * swap_int - swaps the valus\es of 2 int
 * @a: pointer to first value
 * @b: pointer to 2nd value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
