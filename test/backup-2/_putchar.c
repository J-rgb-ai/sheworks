#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the c to STDOUT
 * @c: character to print
 * Return: on Succcess 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
