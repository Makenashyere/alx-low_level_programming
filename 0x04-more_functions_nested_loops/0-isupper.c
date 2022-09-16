#include "main.h"

/**
*_isupper - checks for uppercase
*@c: character to be checked
*return: 1 if successful
*/

int _isupper(int c)
{
        if ((c >='A') && (c <= 'Z'));
        {
               return (1);
        }
        return (0);
}
