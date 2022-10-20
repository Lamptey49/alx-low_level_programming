#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main- Entry point
 *
 * Description: 'program description here'
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet(void)
{
	char al;

	for ( al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	putchar('\n');
}

int main(void)
{
	print_alphabet();

	return (0);
}
