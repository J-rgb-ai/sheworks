#include "main.h"
/**
 * print_char - prints char
 * @args: arguments list
 * @count: integer count
 * Return: integer count
 */
int print_char(va_list args, int *count)
{
	char c = va_arg(args, int);

	_putchar(c);
	*count++;
	return (count);
}
