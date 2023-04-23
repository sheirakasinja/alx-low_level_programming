#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
int d;
char lowercase;

for (lowercase = '0'; d <= '9'; d++)
putchar(d);

for (lowercase = 'a'; lowercase <= 'f'; lowercase++)
putchar(lowercase);
putchar('\n');

return (0);
}
