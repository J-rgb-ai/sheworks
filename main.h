#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
int _printf(char *format, ...);
int print_char(char c);
int print_string(char *str);
void handle_format(char **format, va_list args, int *count);
int handle_unknown(char c);
#endif
