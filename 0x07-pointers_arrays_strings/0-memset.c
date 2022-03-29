#include "main.h"

/**
 * _memset - fill the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: address of memory to print
 * @n: the size of the memory to print
 * @b: the constant byte
 *
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
