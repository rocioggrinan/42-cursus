/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-12 15:00:57 by rogarci2          #+#    #+#             */
/*   Updated: 2025-02-12 15:00:57 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printf(char const *format, ...)
{
    int i;
    int size; 
    va_list arguments;
    size = 0; 
    i = 0;
    va_start (arguments, format);
    if (!format)
        return (-1);
    while (*format != '\0')
    {
        if (*format == '%')
        {
            size += ft_converter(arguments, format[i + 1]);
            i++;
        }
        else 
            size += ft_putchar(format[i]); 
        i++;
    }
    va_end(arguments);
    return(i);
}
int main()
{
    char    c = 'a';

    ft_putchar (c, 1);
    return (0);
}