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
	{
		putchar (x);
	}

	for (x= 'A'; x <= 'Z'; x++)
	{
		putchar (x);
	}
	putchar ('\n');
	return (0);
}
