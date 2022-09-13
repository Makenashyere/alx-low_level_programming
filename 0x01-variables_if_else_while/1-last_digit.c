#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
* main - print if number is greater ,less than
*
*this program prints less or greater than
* return 0
*/
int main(void)
{
int n;
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;

if (l > 5)
{
printf("the last digit of %d is %d and is greater than 5\n", n, l);
}
else if (l == 0)
{
printf("the last digit of %d is %d and is 0\n". n, l);
}
else
{
printf("the last digit of %d is %d and is less than 6 and not 0\n", n, l);
}
return (0);
