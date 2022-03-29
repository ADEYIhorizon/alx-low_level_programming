#include "main.h"

/**
 * _strchr - print found c
 * @s: pointer to char
 * @c: char params to find
 * Return: *s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}

