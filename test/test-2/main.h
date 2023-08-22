#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
int _printf(char *format, ...);
int _putchar(char c);
int print_num(va_list args, int count);
int print_str(va_list args, int count);
int print_char(va_list args, int count);
#endif
