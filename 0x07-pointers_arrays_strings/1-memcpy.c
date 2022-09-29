#include "main.h"

/**
 * char *_memcpy - copies memory area
 * @dest: destination memory area
 * @src: memory area to copy from
 * @n: number of bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int size = n;
if (size > 0)
{
int i;
for (i = 0; i < size; i++)
dest[i] = src[i];
}
return (dest);
}
