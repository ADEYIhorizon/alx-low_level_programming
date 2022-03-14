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

	for (x = 0; x <= 9; x++)
	{
		putchar (x + '0');
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar (x);
	}
	putchar ('\n');
	return (0);
}
