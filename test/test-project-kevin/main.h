#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include<stdlib.h>

int _printf(char *format, ...);
void print_char(char c);
void print_string(char *str);
void handle_format(char **format, va_list args, int *count);
int handle_unknown(char c);
#endif
