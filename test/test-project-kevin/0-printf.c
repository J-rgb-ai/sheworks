#include "main.h"
#include <stdarg.h>
/**
 * _printf - prints formatted text
 * @format: string to print
 * @...: arguments
 * Return: count
*/
int _printf(char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			handle_format(&format, args, &count);
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
