#include "main.h"
/**
 * swap_int - swap values
 * @a: value 1
 * @b: value 2
 * Return: return 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
