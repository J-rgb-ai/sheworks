#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - prints the string
 * @format: pointer to string
 * ...: arguments
 * Returns: integer count
*/
int _printf(char *format, ...)
{
    va_list args;
    va_start(args, format);
    int count = 0;
    char *message = format;
    while(*format != '\0')
    {
        /*printf("I have a %s", book);*/
        /*printf("I have a %d books", 9);*/
        /*printf("I have a %c", 'b');*/
        if (*format == '%')
        {
            *format++;
            if(*format == 'd')
            {
                //we need arguments
                int n = va_arg(args, int);
                int digit = n + '0'; 
                int *ptr = &digit;
                write(STDOUT_FILENO, ptr, 1);
                format++;
            }
            if(*format == 'c')
            {
                //we need arguments
                int n = va_arg(args, int);
                int *ptr = &n;
                write(STDOUT_FILENO, ptr, 1);
                format++;
            }
            if (*format == 's')
            {
                char *str = va_arg(args, char *);
                while (*str != '\0')
                {
                    write(STDOUT_FILENO, str, 1);
                    str++;
                    count++;
                }
                format++;
                count++;
            }
        }
        write(STDOUT_FILENO, format, 1);
        format++;
        count++; 
    }
    va_end(args);
    return (count);
}

/**
 * main - help us test printf
 * Returns: Always 0 success
*/
int main(void)
{
    char *name = "Joy";
    char *a = "is";
    char *subject = "very fast";
    _printf("%s %s %c  %s learner", name, a, 'a', subject);
    return (0);
}
