#include <stdlib.h>
#include <stdio.h>
/**
 * main- Entry point
 *
 * Description: 'program description here'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ls;

	for (ls = 'a'; ls <= 'z'; ls++)
	{
		if (ls != 'e' && ls != 'q')
		{
			putchar(ls);
		}
	}
	putchar('\n');

	return (0);
}
