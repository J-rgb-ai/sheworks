#include "main.h"
#include <stdarg.h>
/**
 * switch_logic - handles switch logic
 * @c: char
 * @args: va_list arguments
 * @count: integer count
 */
void switch_logic(char c, va_list args, int *count)
{
	switch (c)
	{
		case 'c':
			{
				char x = va_arg(args, int);

				*count += print_char(x);
				break;
			}
		case 's':
			{
				char *str = va_arg(args, char *);

				if (str == NULL)
					*count += print_string("(null)");
				if (str != NULL)
					*count += print_string(str);
				break;
			}
		case '%':
				print_char('%');
				*count += 1;
				break;
		case 'd':
		case 'i':
			{
				int num = va_arg(args, int);

				*count += print_int(num);
				break;
			}
		default:
			{
				if (c != ' ' && c != '\\')
					print_char('%');
				*count += 1 + handle_unknown(c);
				break;
			}

	}
}
/**
 * handle_format - handles a format specifier
 * @format: pointer to the current format specifier
 I* @args: variable arguments list
 * @count: pointer to character count
 * Return: void
 */
void handle_format(char **format, va_list args, int *count)
{
	char c;

	(*format)++;
	if (**format == '\0')
	{
		print_char('%');
		(*count)++;
		return;
	}
	c = **format;

	switch_logic(c, args, count);

}
