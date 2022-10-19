#include <stdio.h>
#include <stdlib.h>
/**
 * main- Entry point
 *
 * Description: 'program description here'
 *
 * Return: Always 0 (Success)
 *
 * print_alphabet: prints alphabets
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		printf(c);
	}
}
int main(void)
{
	print_alphabet();

	return (0);
}
