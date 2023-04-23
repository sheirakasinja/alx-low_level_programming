#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *followed by a new line. except q and e
 * return: Always 0 (Success)
 */
int main(void)
{
	cha la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
		       putchar(la);
	}

	putchar('\n');

	return (0);
}
