#include "main.h"
/**
 * print_char - prints character
 * @args: va_list with arguments
 * @count: number of chars
 * Return: counter value
 */
int print_char(va_list args, int count)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	count++;
	return (count);
}
