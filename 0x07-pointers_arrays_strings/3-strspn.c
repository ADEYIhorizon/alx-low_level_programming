#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	char *m = accept;

	while(*s++)
	{
		while (*accept++)
		{
			if (*(s-1) == *(accept -1))
			{
				n++;
				break;
			}
		}
		if (!(*--accept))
			break;
		accept = m;
	}
	return (n);
}
