#include "main.h"
/**
 * handle_string - prints null
 * @str: string
 * Return: int
 */
int handle_string(char *str)
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
		count++;
		str++;
	}
	return (count);
}
