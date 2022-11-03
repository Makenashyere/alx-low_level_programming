#include <stdio.h>

/**
* main - prints line followed by new line
* Return: 0
*/
int main(void)
{
        printf("size of char is %zu byte(s)\n", sizeof(char));
	printf("size of int is %zu byte(s)\n", sizeof(int));
	printf("size of long int is %zu byte(s)\n", sizeof(long int));
	printf("size of long long int is %zu byte(s)\n", sizeof(long long int));
	printf("size of a float is %zu byte(s)\n", sizeof(float));
        
	return (0);
}
