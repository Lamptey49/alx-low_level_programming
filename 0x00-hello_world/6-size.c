#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the description here'
 *
 * Return: Always  0 (Success)
 */
int main(void)
{
	printf("Size of a char: %2d bytes", sizeof(char));
	printf("Size of an int: %2d bytes", sizeof(short int));
	printf("Size of a long int: %2d bytes", sizeof(long int));
	printf("Size of a long long int: %2d bytes", sizeof(unsigned long));
	printf("Size of a float: %2d bytes", sizeof(float));

	return (0);
}
