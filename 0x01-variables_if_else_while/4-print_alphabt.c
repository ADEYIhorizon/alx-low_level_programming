#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{	if (x == 'e' || x == 'q')
			continue;
		putchar (x);
	}
	putchar ('\n');
	return (0);
}
