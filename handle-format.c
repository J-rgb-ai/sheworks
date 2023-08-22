#include "main.h"
#include <stdarg.h>
/**
 * handle_format - handles a format specifier
 * @format: pointer to the current format specifier
 * @args: variable arguments list
 * @count: pointer to character count
 * Return: void
 */
void handle_format(char **format, va_list args, int *count)
{
	(*format)++;
	if (**format == '\0')
	{
		print_char('%');
		(*count)++;
		return;
	}
	switch (**format)
	{
		case 'c':{
				char c = va_arg(args, int);

				(*count) += print_char(c);
				break;
			}
		case 's':{
				char *str = va_arg(args, char *);

				if (str != NULL)
				{
					while (*str)
					{
						*count += print_char(*str);
						str++;
					}
				}
				break;
			}
		case '%':{
				print_char('%');
				(*count)++;
				break;
			}
		default:{
				print_char('%');
				handle_unknown(**format);
				(*count) += 2;
				break;
			}
	}
}
