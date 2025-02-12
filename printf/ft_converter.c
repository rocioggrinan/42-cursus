#include <stdarg.h>
#include "ft_printf.h"

ft_converter(char format, va_list arguments, int *count)
{
    if (format == 'c')
        ft_putchar(va_varg(arguments), (int*)count++);
    else if (format == 's')
        ;
    else if (format == 'p')
        ;
    else if (format == 'd')
        ;
    else if (format == 'i')
        ;
    else if (format == 'u')
        ;
    else if (format == 'x')
        ;
    else if (format == 'X')
        ;
    else if (format == '%')
        ;
    return (0);
}