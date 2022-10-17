#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the description of the program here'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char characters;

	for (characters = 'a'; characters <= 'z'; characters++)
	{
		putchar(characters);
	}
	putchar('\n');

	return (0);
}
