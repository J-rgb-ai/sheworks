#include "main.h"
/**
 * print_string - prints a string
 * @str: string to be output
 * Return: void
 */
void print_string(char *str)
{
	if (str == NULL || str[0] == '\0')
		return;
	while (*str != '\0')
	{
		print_char(*str);
		str++;
	}
}
