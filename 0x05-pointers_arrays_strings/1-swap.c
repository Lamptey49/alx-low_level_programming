#include "main.h"

/**
 * swap_int - swap 2 integers
 * @a: integer
 * @b: integer
 * Return: the swapped integers
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
