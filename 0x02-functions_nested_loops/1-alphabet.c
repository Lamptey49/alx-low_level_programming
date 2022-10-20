#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *print_alphabet - prints the alpahbets
 *
 * Description: 'program description here'
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
