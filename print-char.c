#include "main.h"
#include <unistd.h>
/**
 * print_char - prints a character
 * @c: character to be output
 * Return: void
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}
