#include "main.h"
#include <stdio.h>

/**
 * *_strchr - a function that locates a character in a string
 * @c: character to be returned with the first occurrencence
 * @s: string
 *
 * Return: Null if c is not found - to the first occurrence if c is found
 */

char *_strchr(char *s, char c)
{
int index = 0;

for (index = 0; s[index] >= '\0'; index++)

{
if (s[index] == c)
return (s + index);

}

return ('\0');
}
