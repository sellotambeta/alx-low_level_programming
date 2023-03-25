#include "main.h"

/**
 * print_alphabet_x10 - printing 10 times
 *
 * Return: return 0
 */

void print_alphabet_x10(void)

{
	char o;
	int i;

	for (i = 0 ; i <= 10 ; i++)
	{
		for (o = 'a' ; o <= 'z' ; o++)
			_putchar(o);
		_putchar('\n');
	}
}
