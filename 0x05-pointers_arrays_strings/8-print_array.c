#include <stdio.h>
#include "main.h"

/**
 * print_array - primys n elements ...\n
 * @a: array
 * @n: no of elements
 */
void print_array(inr *a,  int n)
{
	int i;

	for (i = 0; i < n; i+=)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
