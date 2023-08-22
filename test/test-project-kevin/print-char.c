#include "main.h"
#include <unistd.h>
/**
 * print_char - prints a character
 * @c: character to be output
 * Return: void
 */
void print_char(char c)
{
	write(STDOUT_FILENO, &c, 1);
}
