#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'program description here'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char sm, bg;

	for (sm = 'a'; sm <= 'z'; sm++)
	{
		putchar(sm);
	}
	for (bg = 'A'; bg <= 'Z'; bg++)
	{
		putchar(bg);
	}
	putchar('\n');
	return (0);
}
