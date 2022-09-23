#include <stdio.h>

/**
* main - prints line followed by new line
* description - prints line
* Return: - (0)
*/
int main(void)
{
	printf("sizeof char: %d byte(s)\n", sizeof(char));
	printf("size of int: %d byte(s)\n", sizeof(int));
	printf("size of long int: %d byte(s)\n", sizeof(long int));
	printf("size of long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of float: %d byte(s)\n", sizeof(float));

	return (0);
}
