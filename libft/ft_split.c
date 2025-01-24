/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-24 13:52:29 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-24 13:52:29 by rogarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_str_c_len(const char *s, char c)
{
    int count;

    count = 0;
    while (s[count] != c)
    {
        count++;
    }
    return count;
}
char **ft_split(char const *s, char c)
{
    char **result;
    int i;
    int j;
    int count;

    j = 0;
    count = 0;
    i = 0;

    if (!s)
        return NULL;
    while (s[count] != '\0')
        {
            while (s[count] == c)
                count++;
    result = (char **)malloc (sizeof(char*) * count + 1);
    
        result[i] = malloc(ft_str_c_len(&s[count], c) + 1);
        result[i] = ft_substr(&s[count], count, ft_str_c_len(&s[count], c));
        ((char*)s)[count] = '\0';
        i = 0;
    }
    return result;
}
void ft_errores (const char *s, char c)
{
int countt;
    while (s[countt] == '\0')
    {
        countt--;
        free(s[countt] == '\0');
        while (s[countt] != '\0')
        free;
    }
}

int main()
{
    int i;
    int j;

    i = 0;
    char** sirve = ft_split("casa pepe", ' ');
    while (sirve[j] != NULL)
    {
        printf("return\n %s", sirve[j]);
        j++;
    }
    return 0;
}