/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-24 14:04:06 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-24 14:04:06 by rogarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char *ft_strlcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (dest[i] != '\0' && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
/*int main(void)
{
    char dest[] = "Casa";
    char src[] = "Pepe";

    printf("return: %s\n", (ft_strcpy(dest, src)));
    return(0);
}*/
