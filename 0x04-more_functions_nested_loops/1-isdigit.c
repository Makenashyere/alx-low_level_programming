#include "main.h"

/**
* _isdigit - checks whether character is a digit
* @c: to be tested
* Return: 1 if it is
*/

int _isdigit(int c)
{
     if ((c >= 48) && (c <= 57))
     {
             return (1);
     }
     return (0);
}
