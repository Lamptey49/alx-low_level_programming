#include <stdlib.h>
#include <time.h>
/*more headers goes there*/
/**
 * main - Entry point
 *
 * Description: 'program description here'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = num % 10;
	if (d > 5)
	{
		printf("Last digit of %d is greater than 5", d);
	}
	else if (d == 0)
	{
		printf("Last digit of %d is 0", d);
	}
	else if (d < 6)
	{
		printf("Last digit of %d is less than 6 and not 0", d);
	}
	return (0);
}
