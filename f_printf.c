#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* _printf - prints formatted strings,
 * Return: returns nothing.
*/

int _printf(char *format, ...)
{
    var_list args;
    var_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            {
                if (*format == '%')
                {
                    putchar('%');
                    counter++;
                }
                else if (*format == 'c')
                {
                    int ch = va_arg(args, int);
                    putchar(ch);
                    counter++;
                }
                else if (*format == 's')
                {
                    char *str = va_arg(args, char*);
                    while (*str)
                    {
                        putchar(*str);
                        *str++;
                        counter++;
                    }
                }
                else if (*format == 'd' || *format == 'i')
                {
                    int ch = va_arg(args, int);
                    putchar(ch);
                    counter++;
                }
            }
        }
    }
}