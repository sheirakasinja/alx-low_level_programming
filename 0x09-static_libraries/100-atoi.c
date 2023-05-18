#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer.
 *@s: The pointer to convert
 *Return: A integer
 */

int _atoi(char *s)
{

int h = 0;
unsigned int ni = 0;
int min = 1;
int isi = 0;

while (s[h])
{
if (s[h] == 45)
{
min *= -1;
}
isi = 1;
ni = (ni * 10) + (s[h] - '0');
h++;
}
if (isi == 1)
{
h++;
}
ni *= min;

return (ni);
}
