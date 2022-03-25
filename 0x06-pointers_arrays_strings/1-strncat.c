#include "main.h"

/**
 * _strcat - Concatenate of a string
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * @n: int parameter
 * Return: *dest
 */

char *_strncat(char *dest, char *src, int n)
{
    int i;
    int m;

    m = 0;
    
    for(i = 0; i < 1000; i++)
    {
        if (dest[i] == '\0')
        {
            break;
        }
        m++;
    }

    for (i = 0; i < n && src[i] != '\0'; i++)
        {
            dest[m + i] = src[i];
        }
    dest[m + i] = '\0';
    return (dest);
}