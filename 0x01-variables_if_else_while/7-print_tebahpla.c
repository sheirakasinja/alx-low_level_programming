#include <stdio>
#include <stdlib.h>
#include <

/**
 * main - prints the lowercase alphabet in reverse,
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'z'; low  >= 'a'; low--)
		putchar(low);
		putchar('\n');

		return (0);
}
