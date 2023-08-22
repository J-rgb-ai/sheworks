#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include<stdlib.h>

int _printf(char *format, ...);
<<<<<<< HEAD
int print_char(char c);
int handle_string(char *str);
=======
int _putchar(char c);
int print_char(va_list args, int *count);
void print_string(char *str);
>>>>>>> 9994e99e729e9a5b0e14f69520db1ab6fc137cba
void handle_format(char **format, va_list args, int *count);
int handle_unknown(char c);
#endif
