#include "main.h"

/**
 * _memcpy - that copies memory area
 * @src: memory where it is copied
 * @n: nymber of bytes
 * @dest: memory where it is stored
 * Return: returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i ; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
