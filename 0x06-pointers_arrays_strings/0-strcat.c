#include "main.h"

/**
 * _strcat - adding one string to another
 * @dest: destination string
 * @src: source string
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
		dest++;
	for (i = 0 ; src[i] != '\0' ; i++)
		src++;
	for (i = 0 ; i <= srclen ; i++)
		dest[destlen = i] = src[i];
	return (dest);
}
