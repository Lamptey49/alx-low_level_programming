#include "main.h"
/**
 * largest_number - return the largest number
 * @a: first integer
 * @b: second integer
 * @c: third intger
 *
 * Return: returns largest number
 */
int largest_number(int a, int b, int c)
{
	int large;

	if (a > b)
	{
		if (b > c)
			large = a;
		else if (a > c)
			large = a;
		else
			large = c;
	}
	else
	{
		if (b < c)
			large = c;
		else
			large = b;
	}
	return (large);
}

