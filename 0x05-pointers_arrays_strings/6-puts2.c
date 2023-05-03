#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * puts - prints xters of a string
 * @str: used string reference
 * Return: Always 0
 */

void puts2(char *str)
{

int i = 0;

while (str[i] != '\0')
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
