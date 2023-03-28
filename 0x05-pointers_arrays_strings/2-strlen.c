#include "main.h"

/**
 * _strlen - strings
 * Return: return 0
 * @s: String
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
