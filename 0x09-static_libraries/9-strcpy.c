#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description: copy the string pointed to by 'src' to the buffer pointed
 * to by 'dest'
 *
 * Return: pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)

{
int m = -1;

do {
m++;
dest[m] = src[m];

} while (src[m] != '\0');

return (dest);
}
