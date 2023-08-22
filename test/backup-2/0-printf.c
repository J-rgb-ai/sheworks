#include "main.h"
#include <stdarg.h>
/**
 * _printf - custom printf implementation
 * @format: format string
 *
 * Return: the number of chars printed
 * (excluding the null byte used to end output to string)
 */
int _printf(char *format, ...)
{
	int id, count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (id = 0; format[id] != '\0'; id++)
	{
		if (format[id] == '\0')
			break;
		if (format[id] == '%')
		{
			if (format[id + 1] == '%')
			{
				_putchar('%');
				count++;
			}
			else if (format[id + 1] == 'd' || format[id + 1] == 'i')
			{
				count = print_num(args, count);
			}
			else if (format[id + 1] == 'c')
			{
				count = print_char(args, count);
			}
			else if (format[id + 1] == 's')
			{
				count = print_str(args, count);
			}
			id++;
		}
		else
		{
			_putchar(format[id]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
