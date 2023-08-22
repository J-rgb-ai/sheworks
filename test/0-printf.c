#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * print_char - prints a character
 * @c: the character to print
 * Return: void
*/
void print_char(char c)
{
    write(STDOUT_FILENO, &c, 1);
}