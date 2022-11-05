#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: the argument count
 * @argv: the argument value
 * Return: always 0 (success)
 */
int main(int argc, char argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
		}
	}

	return (0);
}
