#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 *@c: the character to be checked
 *Return: i for uppercase or 0 anything
 */

int _isupper(int c)

{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
