#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints all aphabets in lowercase
 *
 * Description: They are sorted by default
 * return (0)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}