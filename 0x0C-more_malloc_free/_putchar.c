#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints the character to stdout
 * @c: the character to print
 *
 * Return: Always 1 success
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
