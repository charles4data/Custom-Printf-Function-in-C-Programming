#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
* _printf - prints formatted strings,
 * Return: returns nothing.
*/

int _printf(char *format, ...)
{
    va_list args;
    va_start(args, format);

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
                else if (*format == 'x' || *format == 'X')
                {
                    double ch = va_arg(args, double);
                    int upcs = (*format == 'X');
                    custom_handle(ch, upcs);
                }
                else if (*format == 'o')
                {
                    int ch = va_arg(args, int);
                    putchar(ch);
                    counter++;
                }
                else if (*format == 'u')
                {
                    unsigned int ch = va_arg(args, unsigned int);
                    putchar(ch);
                    counter++;
                }
                else if (*format == 'p')
                {
                    void *ptr = va_arg(args, void *);
                    putchar(*ptr);
                    counter++;
                }
            }
        }
    }
}