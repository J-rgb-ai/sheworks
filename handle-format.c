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
		_putchar('%');
		(*count)++;
		return;
	}
	if(**format == 'c')
	{
<<<<<<< HEAD
<<<<<<< HEAD
		case 'c':{
				char c = va_arg(args, int);

				(*count) += print_char(c);
				break;
			}
		case 's':{
				char *str = va_arg(args, char *);

				count += handle_string(str);
				break;
			}
		case '%':{
				print_char('%');
				(*count)++;
				break;
			}
		default:{
				print_char('%');
				(*count) += 1 + handle_unknown(**format);
				break;
			}
=======
		*count = print_char(args, *count);
>>>>>>> 9994e99e729e9a5b0e14f69520db1ab6fc137cba
=======
		*count = print_char(args, *count);
>>>>>>> 9994e99e729e9a5b0e14f69520db1ab6fc137cba
	}
}
