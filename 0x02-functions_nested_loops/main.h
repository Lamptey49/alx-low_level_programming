#include <stdio.h>
#include <stdlib.h>
/**
 * print_putchar: a function that prints the word _putchar
 *
 * print_alphat: a function that prints alphabets
 *
 * return always 0 (success)
 */
void print_putchar()
{
	printf("_putchar\n");

}
void print_alphabet(void)
{
        char c;

        for (c = 'a'; c <= 'z'; c++)
        {
                putchar(c);
        }
}
