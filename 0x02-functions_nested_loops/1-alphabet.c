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
void print_alphabet()
{
        char c;

        for (c = 'a'; c <= 'z'; c++)
        {
                putchar(c);
        }
        putchar('\n');
}


int main(void)
{
	print_alphabet();

	return (0);
}
