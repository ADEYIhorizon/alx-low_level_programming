#include "main.h"

/**
 * _memcpy - copy n byte
 * @dest: the address of memory to print
 * @src:  the address to print
 * @n: the size of the memory to print
 *
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
