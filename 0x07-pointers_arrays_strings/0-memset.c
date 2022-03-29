#include "main.h"

/**
 * _memset - fill the first n bytes of the memory area
 * @s: address of memory to print
 * @n: the size of the memory to print
 * @b: the constant byte
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
