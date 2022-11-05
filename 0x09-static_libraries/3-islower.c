#include "main.h"

/**
 * _islower- checks if alpha is _lowercase
 * @c: the character of _lowercase
 * Return: 1 if letter is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
