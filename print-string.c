#include "main.h"
/**
 * print_string - prints a string
 * @str: string to be output
 * Return: void
 */
int print_string(char *str)
{
	int count = 0;

	if (str == NULL)
	{
		str = "null";
		while (*str != '\0')
		{
			print_char(*str);
			count++;
			str++;
		}
	}
	while (*str != '\0')
	{
		print_char(*str);
		str++;
		count++;
	}
	return (count);
}
