#include "main.h"
#include <unistd.h>
/**
 * print_char - prints a character
 * @c: character to be output
 * Return: void
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
